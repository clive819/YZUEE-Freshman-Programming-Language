#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main(void){
    int num, sum=0, count=0;
    printf("binary number: ");
    scanf("%d", &num);
    printf("the decimal number of %d is ", num);
    while (num > 0) {
        sum += (num%10)*pow(2.0, count);
        count++;
        num /= 10;
    }
    printf("%d\n", sum);
}