/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/05/03
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void multiply(int num){
    if (num == 0) {
        for (int i=1; i<8; i+=3) { //讓i跑1,4,7
            for (int j=1; j<10; j++) { // j跑 1~9
                printf("%d * %d = %d\t%d * %d = %d\t%d * %d = %d\n", i, j, i*j, i+1, j, (i+1)*j, i+2, j, (i+2)*j); // i=1的時候 跑 i*j (i+1)*j (i+2)*j --> 1*j 2*j 3*j
            }
            printf("\n");
        }
    }
    else{
        for (int i=1; i<10; i++) {
            printf("%d * %d = %d\n", num, i , num*i);
        }
    }
}

int guess(){
    srand(time(0)); //因為rand()亂數你每次程式重跑的話亂數的順序永遠就是那樣 所以你要把亂數打亂 用srand() 然後time(0)自己google 引用time.h才能用time(0)
    int mynum = rand()%100+1, num, t=0; // rand()是亂數產生器 會隨便產生一個亂數 %100的話就是把那個亂數除以100求於數 所以會把數字控制在0~99 +1的話就變成1~100
    printf("I have a number between 1 and 100.\nCan you guess my number?\nPlease type your first guess: ");
    scanf("%d", &num);
    while (num != mynum) {
        if (num > mynum) {
            printf("Too high. Try again.\nPlease type your guess: ");
        }
        else{
            printf("Too low. Try again.\nPlease type your guess: ");
        }
        t++;
        scanf("%d", &num);
    }
    return t; // 回傳總共猜了幾次
}

int main(void){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    multiply(num);
    int play = 1;
    while (play) { 
        int t = guess();
        printf("Excellent! You guessed the number!\nYou have guessed %d times\nWould you like to play again (1 or 0)? ", t);
        int opt;
        scanf("%d", &opt);
        
    }
}

