/*
 Student: 劉醇浩
 ID: s1040641
 DATE:2016/3/29
 */

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num, i = 2;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    }
    while (i < num) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            break;
        }
        i++;
    }
    if (i == num) {
        printf("%d is a prime number.\n", num);
    }
    float x = 1.0;
    printf("       x        x*x       x+x\n");
    do{
        printf("%8.1f   %8.2f  %8.2f\n", x*1.0, x*x*1.0, x*1.0+x);
        x+=0.5;
    }while (x <= 10);
    float a = 1.0, b = 2.0, result = 1.0;
    int n = 1;
    while (n < 100000) {
        result *= b/a;
        n++;
        if (n % 2 == 0) {
            a += 2;
        }
        else{
            b += 2;
        }
    }
    printf("π = %.5f\n", 2*result);
    
}


