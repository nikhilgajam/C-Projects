#include <stdio.h>

int main(){

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

    return (op);

}
