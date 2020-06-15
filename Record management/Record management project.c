#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char rno[50];
    char name[50];
    int age;
}s;

void addr();
void delr();
void modr();
void sear();
void dpar();
void quit();

int main(){

    char type[50];

    printf(">>>Record Management Program<<<\n\n");


    printf("Enter 'addr' to add a new record\n");
    printf("Enter 'delr' to add delete a record\n");
    printf("Enter 'modr' to modify a record\n");
    printf("Enter 'sear' to search a record\n");
    printf("Enter 'dpar' to display all records\n");
    printf("Enter 'quit' to quit\n");
    printf("\n");

    while(1){

        printf("Enter: ");
        scanf("%s", type);
        printf("\n");

        if(strcmp(type, "addr") == 0){
            addr();
        }else if(strcmp(type, "delr") == 0){
            delr();
        }else if(strcmp(type, "modr") == 0){
            modr();
        }else if(strcmp(type, "sear") == 0){
            sear();
        }else if(strcmp(type, "dpar") == 0){
            dpar();
        }else if(strcmp(type, "quit") == 0){
            quit();
        }else{
            printf("Enter stated things only\n");
        }
    }

    return 0;

}

void addr(){

    FILE *p = fopen("record.txt", "a");

    if(p == NULL){
        printf("Error in opening the file\n\n");
    }else{

    printf("Enter student Roll No: ");
    scanf("%s", s.rno);
    fflush(stdin);
    printf("Enter name: ");
    scanf(" %[^\n]s", s.name);
    fflush(stdin);
    printf("Enter age: ");
    fflush(stdin);
    scanf("%d", &s.age);

    fwrite(&s, sizeof(s), 1, p);

    printf("\n");

    fclose(p);

    printf("\nSuccessfully Added\n\n");

    }

}

void delr(){

    char search[50];
    int k=0;

    printf("Enter Roll No to delete: ");
    scanf("%s", search);

    printf("\n\n");

    FILE *p, *q;

    p = fopen("record.txt", "r");
    q = fopen("temp.txt", "w");

    if(p == NULL && q == NULL){
        printf("Error in opening the file\n\n");
    }else{

    printf("_____________________________________________________________\n\n");

    while(1){

        fread(&s, sizeof(s), 1, p);

        if(feof(p)){
        break;
        }

        if(strcmp(s.rno, search) == 0){

            printf("===>Existing record:\n\n");

            printf("Student Roll No: %s\n", s.rno);
            printf("Name: %s\n", s.name);
            printf("Age: %d\n", s.age);
            printf("\n");
            k++;

        }else{

            fwrite(&s, sizeof(s), 1, q);   //This writes all other existing records
        }
    }

    printf("_____________________________________________________________\n\n");

    fclose(p);
    fclose(q);

    if(k==0){
        printf("Record not found\n\n");
        remove("temp.txt");
    }else{

        p = fopen("record.txt", "w");
        q = fopen("temp.txt", "r");

        while(1){

            fread(&s, sizeof(s), 1, q);

            if(feof(q)){
                break;
            }

            fwrite(&s, sizeof(s), 1, p);
            }

        fclose(p);
        fclose(q);

        remove("temp.txt");

        printf("\nSuccessfully Deleted\n\n");
    }
    }

}

void modr(){

    char search[50];
    int k=0;

    printf("Enter Roll No to modify: ");
    scanf("%s", search);

    printf("\n\n");

    FILE *p, *q;

    p = fopen("record.txt", "r");
    q = fopen("temp.txt", "w");

    if(p == NULL && q == NULL){
        printf("Error in opening file\n\n");
    }else{

    printf("_____________________________________________________________\n\n");

    while(1){

        fread(&s, sizeof(s), 1, p);

        if(feof(p)){
        break;
        }

        if(strcmp(s.rno, search) == 0){

            printf("===>Existing record:\n\n");

            printf("Student Roll No: %s\n", s.rno);
            printf("Name: %s\n", s.name);
            printf("Age: %d\n", s.age);
            printf("\n");
            k++;

            printf("===>Enter new data:\n\n");

            printf("Enter student Roll No: ");
            scanf("%s", s.rno);
            fflush(stdin);
            printf("Enter name: ");
            scanf(" %[^\n]s", s.name);
            fflush(stdin);
            printf("Enter age: ");
            fflush(stdin);
            scanf("%d", &s.age);

            fwrite(&s, sizeof(s), 1, q);
        }else{

            fwrite(&s, sizeof(s), 1, q);   //This writes all other existing records
        }
    }

    printf("_____________________________________________________________\n\n");

    fclose(p);
    fclose(q);

    if(k==0){
        printf("Record not found\n\n");
        remove("temp.txt");
    }else{

        p = fopen("record.txt", "w");
        q = fopen("temp.txt", "r");

        while(1){

            fread(&s, sizeof(s), 1, q);

            if(feof(q)){
                break;
            }

            fwrite(&s, sizeof(s), 1, p);
        }

        fclose(p);
        fclose(q);

        remove("temp.txt");
        printf("\nSuccessfully Modified\n\n");
    }

    }

}

void sear(){

    char search[50];
    int k=0;

    printf("Enter Roll No to display: ");
    scanf("%s", search);

    printf("\n\n");

    FILE *p = fopen("record.txt", "r");

    if(p == NULL){
        printf("Error in opening the file\n\n");
    }else{

    printf("===>Existing Record:\n");

    printf("_____________________________________________________________\n\n");

    while(1){

        fread(&s, sizeof(s), 1, p);

        if(feof(p)){
        break;
        }

        if(strcmp(s.rno, search) == 0){
            printf("Student Roll No: %s\n", s.rno);
            printf("Name: %s\n", s.name);
            printf("Age: %d\n", s.age);
            printf("\n");
            k++;
        }

    }

    if(k == 0){
            printf("Record not found\n\n");
        }

    printf("_____________________________________________________________\n\n");

    fclose(p);

    }

}

void dpar(){

    FILE *p = fopen("record.txt", "r");

    if(p == NULL){
        printf("Error in opening the file\n\n");
    }else{

    printf("===>Existing Records:\n");

    printf("_____________________________________________________________\n\n");

    while(1){

        fread(&s, sizeof(s), 1, p);

        if(feof(p)){
        break;
        }

        printf("Student Roll No: %s\n", s.rno);
        printf("Name: %s\n", s.name);
        printf("Age: %d\n", s.age);
        printf("\n");

    }

    printf("_____________________________________________________________\n\n");

    fclose(p);

    }

}

void quit(){
    exit(1);
}
