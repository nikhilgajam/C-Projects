#include <stdio.h>
#include <string.h>

char string_rev(char []);
int string_length(char a[]);
int string_compare(char a[], char b[]);
char string_copy(char a[], char b[]);
char string_concatenation(char a[], char b[]);
char string_upper(char a[]);
char string_lower(char a[]);



int main(){



}

char string_rev(char a[]){

    int i, l, n;
    l = strlen(a);
    char b[100]={0};

    for(i=0; i<l; i++){
        b[i] = a[(l-1)-i];
    }

    for(i=0; i<l; i++){
        a[i] = b[i];
    }

    return *a;

}

int string_length(char a[]){

    int i=0, len=0;

        while(a[i] != '\0'){ // a[i] != 0
            len++;
            i++;

    }

    return len;

    /*
    ANOTHER IMPLEMENTATION

    int len=0, i;

    char k[] = "";

    for(i=0; 1; i++){
        if(a[i] != k[i]){
            len++;
        }else{
            break;
        }
    }

    */

}

int string_compare(char a[], char b[]){

    int i, val;
    for(i=0; 1; i++){
        if(a[i] != '\0'){
            val = a[i]-b[i];
        }else{
            break;
        }
    }

    return val;

    /*
    AS PER CODEBLOCKS

    int ans=0, i, l, a1, b1;

    l = strlen(a);

    a1 = strlen(a);
    b1 = strlen(b);

    for(i=0; i<l; i++){
        if(a[i] != b[i]){
            ans++;
        }
    }

    if(a1>=b1){
        printf("Comparison = %d", ans);
    }else{
        printf("Comparison = %d", -ans);
    }*/

}

char string_copy(char a[], char b[]){

    int i,l1, l2;

    l1 = strlen(a);
    l2 = strlen(b);

    if(l1 > l2){

    for(i=0; i<l1; i++){
        a[i] = b[i];
    }

    }else{

    for(i=0; i<l2; i++){
        a[i] = b[i];
    }

    }

    return *a;

}

char string_concatenation(char a[], char b[]){

    int i, l1, l2;

    l1 = strlen(a);
    l2 = strlen(b);

    for(i=0; i<l1+l2; i++){
        a[i+l1] = b[i];
    }

    return *a;

}

char string_upper(char a[]){

    int i, j, l;

    l = strlen(a);

    for(i=0; i<l; i++){

        if(a[i] >= 97 && a[i] <= 122){

        a[i] = a[i]-32;

        }

    }

    return *a;

}

char string_lower(char a[]){

    int i, j, l;

    l = strlen(a);

    for(i=0; i<l; i++){

        if(a[i] >= 65 && a[i] <= 90){

        a[i] = a[i]+32;

        }

    }

    return *a;

}


