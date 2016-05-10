/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/05/10
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int reverse(int num){
    int result = 0;
    while (num>0) {
        result = 10*result + num%10;
        num /= 10;
    }
    return result;
}

float f(float x){
    return 3*pow(x, 3) + 2*x - 1;
}

int main(void){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The reverse of %d is %d\n", num, reverse(num));
    printf("f(-3.2) = %f\n", f(-3.2));
    printf("f(-2.1) = %f\n", f(-2.1));
    printf("f(0) = %f\n", f(0));
    printf("f(2.5) = %f\n", f(2.5));
    
}

