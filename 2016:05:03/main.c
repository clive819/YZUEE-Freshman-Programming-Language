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
        for (int i=1; i<8; i+=3) {
            for (int j=1; j<10; j++) {
                printf("%d * %d = %d\t%d * %d = %d\t%d * %d = %d\n", i, j, i*j, i+1, j, (i+1)*j, i+2, j, (i+2)*j);
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
    srand(time(0));
    int mynum = rand()%100+1, num, t=0;
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
    return t;
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

