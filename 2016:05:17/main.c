/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/05/17
 */
#include <stdio.h>
#include <stdlib.h>

void reverse_num(int *num){
    int result=0;
    for (int tmp=*num; tmp>0; tmp/=10) {
        result = result*10 + tmp%10;
    }
    *num = result;
}

int main(void){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d -> ", num);
    reverse_num(&num);
    printf("%d\n", num);
}

