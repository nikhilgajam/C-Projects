#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

void add(int x, int y){
    printf("%d\n", x+y);
}

void sub(int x, int y){
    printf("%d\n", x-y);
}

void mul(int x, int y){
    printf("%d\n", x*y);
}

void divs(double x, double y){
    printf("%g\n", x/y);
}

void mod(int x, int y){
    printf("%d\n", x%y);
}

void armstrong(int num){
    int n, temp, r=0;

    temp = num;

    for( ; num>0; num/=10){
        n = num%10;
        r = r+(n*n*n);
    }

    if(temp == r){
        printf("%d =  %d, Armstrong Number", temp, r);
    }else{
        printf("%d != %d, Ordinary Number", temp, r);
    }
}

void summation(int num){
    int n, count=0, r=0;

    for( ; num>0; num/=10){
        n = num%10;
        r = n+r;
        count++;
    }

    printf("Sum = %d, Digits = %d\n", r, count);
}

void reversing(int num){
    int n, r=0;

    for( ; num>0; num/=10){
        n = num%10;
        r = r*10+n;
    }

    printf("%d\n", r);
}

void palindrome_check(int num){
    int n, temp, r=0;

    temp = num;

    for( ; num>0; num/=10){
        n = num%10;
        r = r*10+n;
    }

    if(r == temp){
        printf("%d = %d, It Is A Palindrome Number\n", temp, r);
    }else{
        printf("%d != %d, It Is A Ordinary Number\n", temp, r);
    }

}

void factors(int num){
    int x;

    for(x=1; x<=num; x++){
        if(num%x == 0){
            printf("%d", x);

            if(num>x){
                printf(", ");
            }

            if(num == x){
                printf(".\n");
            }
        }
    }
}

void factorial(int k){
    int fact = 1;

    for(; k>=1; k--){
        fact = fact * k;
    }
    printf("%d\n", fact);
}

void prime(int num){
    int x, count=0;

    for(x=1; x<=num; x++){
        if(num%x == 0){
            count++;
        }
    }
    if(count == 2){
            printf("%d = Prime Number", num);
        }else{
            printf("%d = Ordinary Number", num);
        }
}

void table_generator(int num){
    int x;
    for(x=1; x<=10; x++){
        printf("%d x %3d = %d\n", num, x, num*x);
    }
}

void evenorodd(int x){
    if(x % 2 == 0){
        printf("%d = Even Number\n", x);
    }else{
        printf("%d = Odd Number\n", x);
    }
}

void eqtriangle(int rows){
        int w, x, y, var;

    var = rows;

    for(w=1; w<=rows; w++){
        for(x=1; x<=var; x++){
                printf(" ");
            }


        for(y=1; y<=w; y++){
            printf("%d", w);
            printf(" ");
        }

        printf(" ");
        printf("\n");
        var = var -1;

    }

}

void ratriangle(int rows){
     int x, y;

    for(x=1; x<=rows; x++){
        for(y=1; y<=x; y++){
            if(x<10){
                printf("%d  ", x);
            }else if(x<99){
                printf("%d ", x);
            }
        }
        printf("\n");
    }
}

void temperature_conv(){

    int temp, cases;
    float op;

    printf("Temperature Conversion Program\n");

    printf("\nPress 1 =  Celsius    -  Kelvin\n");
    printf("Press 2 =  Celsius    -  Fahrenheit\n");
    printf("Press 3 =  Kelvin     -  Fahrenheit\n");
    printf("Press 4 =  Kelvin     -  Celsius\n");
    printf("Press 5 =  Fahrenheit -  Celsius\n");
    printf("Press 6 =  Fahrenheit -  Kelvin\n");

    printf("\nType: ");
    scanf(" %d", &cases);

    printf("\nType temperature: ");
    scanf(" %d", &temp);

    printf("\nConversion: \n");

    switch(cases){
    case 1:
        op = temp + 273.15;
        printf("°C - °K = %f\n", op);
        break;

    case 2:
        op = (temp * 9/5) + 32;
        printf("°C - °F = %f\n", op);
        break;

    case 3:
        op = (temp - 273.15) * 9/5 + 32;
        printf("°K - °F = %f\n", op);
        break;

    case 4:
        op = temp - 273.15;
        printf("°K - °C = %g\n", op);
        break;

    case 5:
        op = (temp - 32) * 5/9;
        printf("°F - °C = %f\n", op);
        break;

    case 6:
        op = (temp - 32) * 5/9 + 273.15;
        printf("°F - °K = %f\n", op);
        break;

    default:
        printf("Type Only The Numbers Shown On The Screen\n");

    }

}

double absolute(double a){
    if(a>0){
        return a;
    }else{
        a = -(a);
        return a;
    }
}

double square_root(double a){
    double sq;
    sq= pow(a, 0.5);
    return (sq);

}

int ceiling(double a){
    int temp = a;

    if(a>temp){
        return a+1;
    }else{
        return a;
    }
}

int flooring(double a){
    int temp = a;

    if(a>temp){
        return a-1;
    }else{
        return a;
    }
}

int truncater(double a){
    //It works like ceil for negative values and floor for positive values
    int temp = a;

    if(a>0){

        if(a>temp){
        return a-1;
    }else{
        return a;
    }

    }else{
        if(a>temp){
        return a+1;
    }else{
        return a;
    }
    }
}

int rounder(double a){
    int temp = a;

    if(temp + 0.5 <= a){
        return a+1;
    }else{
        return temp;
    }
}

long long int power(int num, int powr){

    long long int ans = 1;

    if(powr > 1){

    for(; powr > 0; powr--)
    {
        ans *= num;
    }

    }else{

        return 1;

    }

    return ans;

}

void ascii(){

    for(int k=0; k<=256; k++){

        printf("%d = %c\n", k, k);

    }
}

float sinex(float x){
    int n;
    float term, denominator, sine;

    //Enter the value in degrees 'x'

    x = x * (3.142 / 180.0);
    term = x;
    sine = term;

    //n<=6 because accuracy of float will be 6

    for(n=1; n<=6; n++){

        denominator = 2 * n * (2 * n + 1);
        term = -term * x * x / denominator;
        sine = sine + term;

    }

    return sine;

}

float cosinex(float x){
    int n;
    float term, denominator, cosine;

    //Enter the value in degrees 'x'

    x = x * (3.142 / 180.0);
    term = 1;
    cosine = term;

    //n<=6 because accuracy of float will be 6

    for(n=1; n<=6; n++){

        denominator = 2 * n * (2 * n - 1);
        term = -term * x * x / denominator;
        cosine = cosine + term;

    }

    if(cosine > 0){
        return cosine;
    }else{
        return -cosine;
    }

}

float tanx(float x){

    float tan;

    tan = sinex(x)/cosinex(x);

    return tan;

}

float cotx(float x){

    float tan, cot;

    tan = sinex(x)/cosinex(x);

    cot = 1/tan;

    return cot;

}

float secx(float x){

    float sec;

    sec = 1/cosinex(x);

    return sec;

}

float cosecx(float x){

    float cosec;

    cosec = 1/sinex(x);

    return cosec;

}

void bubble_sort(){

    int n, k, l, temp;
    printf("Simple Bubble Sorting Program\n");

    printf("\nType how many elements you want in an array: ");
    scanf(" %d", &n);

    int a[n];

    for(k=0; k<n; k++){
        printf("Type element %d: ", k+1);
        scanf(" %d", &a[k]);
    }

    for(k=0; k<n; k++){

        for(l=0; l<n-1; l++){

            if(a[l] > a[l+1]){  // You can also change < and > in the if statement
                temp = a[l];
                a[l] = a[l+1];
                a[l+1] = temp;
            }
        }
    }


    printf("\nSorted Elements: \n");

    for(k=0; k<n; k++){

        printf("%d\n", a[k]);

    }

}

void matrix_multiplication(){

    {
    int r1, r2, c1, c2, i, j, k;

    printf("Matrix Multiplication Program\n\n");

    printf("Enter no of rows & columns of Matrix 1: ");
    scanf(" %d %d", &r1, &c1);

    printf("Enter no of rows & columns of Matrix 2: ");
    scanf(" %d %d", &r2, &c2);

    int matrix1 [r1] [c1];
    int matrix2 [r2] [c2];
    int ans [r1] [c1];

    if(c1 == r2){

            printf("\nEnter Elements Of Matrix 1\n\n");

            for(i=0; i<r1; i++){

                for(j=0; j<c1; j++){
                       scanf("%d", &matrix1[i][j]);
                }

            }

            printf("\nEnter Elements Of Matrix 2\n\n");

            for(i=0; i<r2; i++){

                for(j=0; j<c2; j++){
                       scanf("%d", &matrix2[i][j]);
                }

            }

            for(i=0; i<r1; i++){

                for(j=0; j<c2; j++){

                        ans[i][j] = 0;

                        for(k=0; k<c1; k++){

                       ans[i][j] += matrix1[i][k] * matrix2[k][j];

                        }
                }

            }


            printf("\n\nMatrix Multiplication: \n");

            for(i=0; i<r1; i++){

                for(j=0; j<c1; j++){
                    printf("   ");
                       printf("%d\t", ans[i][j]);
                }

                printf("\n");

            }

    }else{
        printf("Dimensional Error\n");
    }
}

}

void matrix_subtraction(){

    {
    int r1, r2, c1, c2, i, j, k;

    printf("Matrix Subtraction Program\n\n");

    printf("Enter no of rows & columns of Matrix 1: ");
    scanf(" %d %d", &r1, &c1);

    printf("Enter no of rows & columns of Matrix 2: ");
    scanf(" %d %d", &r2, &c2);

    int matrix1 [r1] [c1];
    int matrix2 [r2] [c2];
    int ans [r1] [c1];

    if(r1 == r2 && c1 == c2){

            printf("\nEnter Elements Of Matrix 1\n\n");

            for(i=0; i<r1; i++){

                for(j=0; j<c1; j++){
                       scanf("%d", &matrix1[i][j]);
                }

            }

            printf("\nEnter Elements Of Matrix 2\n\n");

            for(i=0; i<r2; i++){

                for(j=0; j<c2; j++){
                       scanf("%d", &matrix2[i][j]);
                }

            }

            for(i=0; i<r1; i++){

                for(j=0; j<c1; j++){

                       ans[i][j] = matrix1[i][j] - matrix2[i][j];

                }

            }


            printf("\n\nMatrix Subtraction: \n");

            for(i=0; i<r1; i++){

                for(j=0; j<c1; j++){
                    printf("   ");
                       printf("%d\t", ans[i][j]);
                }

                printf("\n");

            }

    }else{
        printf("Rows and Columns must be same to execute the operation\n");
    }
}

}

void matrix_addition(){

    {
    int r1, r2, c1, c2, i, j, k;

    printf("Matrix Addition Program\n\n");

    printf("Enter no of rows & columns of Matrix 1: ");
    scanf(" %d %d", &r1, &c1);

    printf("Enter no of rows & columns of Matrix 2: ");
    scanf(" %d %d", &r2, &c2);

    int matrix1 [r1] [c1];
    int matrix2 [r2] [c2];
    int ans [r1] [c1];

    if(r1 == r2 && c1 == c2){

            printf("\nEnter Elements Of Matrix 1\n\n");

            for(i=0; i<r1; i++){

                for(j=0; j<c1; j++){
                       scanf("%d", &matrix1[i][j]);
                }

            }

            printf("\nEnter Elements Of Matrix 2\n\n");

            for(i=0; i<r2; i++){

                for(j=0; j<c2; j++){
                       scanf("%d", &matrix2[i][j]);
                }

            }

            for(i=0; i<r1; i++){

                for(j=0; j<c1; j++){

                       ans[i][j] = matrix1[i][j] + matrix2[i][j];

                }

            }


            printf("\n\nMatrix Addition: \n");

            for(i=0; i<r1; i++){

                for(j=0; j<c1; j++){
                    printf("   ");
                       printf("%d\t", ans[i][j]);
                }

                printf("\n");

            }

    }else{
        printf("Rows and Columns must be same to execute the operation\n");
        }
    }
}

void matrix_transpose(){

    printf("Matrix Transpose Program\n\n");

    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf(" %d %d", &r, &c);

    int a[r][c], transpose[r][c];

    printf("Type array elements: \n");

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){

            scanf("%d", &a[i][j]);

        }
    }


    printf("\nTransposed Elements: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){

            transpose[i][j] = a[j][i];

            printf(" ");
            printf("\t%d", transpose[i][j]);
        }
        printf("\n");
    }


}

void matrix_determinant(){

    printf("Matrix Determinant Program\n\n");

    int i, j, r, c;

    printf("Enter rows and columns: ");
    scanf(" %d %d", &r, &c);

    int a[r][c], det;

    printf("\nEnter elements: \n");

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf(" %d", &a[i][j]);
        }
    }


    if(r == 3 && c == 3){

        det = a[0][0] * ((a[1][1] * a[2][2]) -  (a[2][1] * a[1][2])) - a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2])) + a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1]));
        printf("\n3X3 Determinant: %d\n", det);

    }else{

        det = det = a[0][0] * (a[1][1]) - a[0][1] * (a[1][0]);
        printf("\n2X2 Determinant: %d\n", det);

    }

}

void binary_searching(){

    printf("Binary Search Program\n\n");

    int a[100], num, k, search, scount=0, low, middle, high;

    printf("Enter No.of elements in an array: ");
    scanf(" %d", &num);

    if(num > 100){
        printf("\nToo Many Numbers\n");
        exit(0);
    }

    printf("\nEnter the elements of the array\n");

    for(k=0; k<num; k++){
        scanf(" %d", &a[k]);
    }

    printf("\nEnter the element to search: ");
    scanf(" %d", &search);

    low = 0;
    high = num-1;

    while(high >= low){

        middle = (low+high)/2;

        if(a[middle] == search){

            scount = 1;
            break;

        }else if (search < a[middle]){

            high = middle - 1;

        }else{

            low = middle + 1;

        }

    }

    if(scount == 0){

        printf("\n %d NOT FOUND\n", search);

    }else{

        printf("\n%d FOUND AT %d POSITION\n", search ,middle);

    }

    return;

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

    int len=0, i;

    char k[] = "";

    for(i=0; i<1000; i++){
        if(a[i] != k[i]){
            len++;
        }else{
            break;
        }
    }

    return len;

}

void string_compare(char a[], char b[]){

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
    }

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

void numbers_to_words(int num){

    int n, r=0, exp;

    for(; num>0; num/=10){
        n = num%10;
        r = r*10+n;
    }

    for( ; r>0; r /= 10){

        exp = r%10;

        switch(exp){

        case 1:
            printf(" One ");
            break;

        case 2:
            printf(" Two ");
            break;

        case 3:
            printf(" Three ");
            break;

        case 4:
            printf(" Four ");
            break;

        case 5:
            printf(" Five ");
            break;

        case 6:
            printf(" Six ");
            break;

        case 7:
            printf(" Seven ");
            break;

        case 8:
            printf(" Eight ");
            break;

        case 9:
            printf(" Nine ");
            break;

        default:
            printf(" Zero ");

        }
    }

}

int gcd(int a, int b){
    int i, gcd;

    for(i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i == 0){
            gcd = i;
        }
    }

    return gcd;
}

int lcm(int a, int b){
    int i, gcd, lcm;

    for(i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }

    lcm = (a*b)/gcd;

    return lcm;
}




















