#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double absolute(double a);
double square_root(double a);
int ceiling(double a);
int flooring(double a);
int truncater(double a);
int rounder(double a);
long long int power(int num, int powr);
float sinex(float x);
float cosinex(float x);
float tanx(float x);
float cotx(float x);
float secx(float x);
float cosecx(float x);
double per_sqrt(int x);

int main(){

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

double per_sqrt(int x)
{
    if (x == 0 || x == 1){
        return x;
    }

    int k=0, ans=1;

    for(; ans <= x; k++){
        ans = k * k;
    }
}








