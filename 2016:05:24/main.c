/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/05/24
 */
#include <time.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
void gen_random_number(int num[]){
    srand((unsigned int)time(0));
    int count = 0;
    while (count < 4) {
        bool nr = true;
        int random = rand() % 9 + 1;
        for (int j=0; j<count; j++) {
            if (random == num[j]) {
                nr = false;
            }
        }
        if (nr) {
            num[count] = random;
            count++;
        }
    }
}

bool compare(int a[], int b[]){
    int rp=0, rn=0;
    for (int i=0; i<4; i++) {
        if (a[i]==b[i]) {
            rp++;
        }
        for (int j=0; j<4; j++) {
            if (i==j) {
                continue;
            }
            if (a[i]==b[j]) {
                rn++;
            }
        }
    }
    printf("%dA%dB\n", rp, rn);
    if (rp==4) {
        return true;
    }
    return false;
}


int main(){
    int user_guess[4] = {0}, random_number[4], num;
    gen_random_number(random_number);
    printf("Enter a 4-digits number: ");
    scanf("%d", &num);
    for (int i=0; i<4; i++) {
        user_guess[3-i] = num%10;
        num/=10;
    }
    while (!compare(user_guess, random_number)) {
        printf("Enter a 4-digits number: ");
        scanf("%d", &num);
        for (int i=0; i<4; i++) {
            user_guess[3-i] = num%10;
            num/=10;
        }
    }
}