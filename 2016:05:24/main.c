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
    srand((unsigned int)time(0)); // 打亂亂數 強制轉成 unsigned int 可以不用加 加了下面不會有錯誤
    int count = 0; // 陣列第幾格
    while (count < 4) {
        bool nr = true; // nr代表沒有重複 一開始都假設沒重複 (nr=true)
        int random = rand() % 9 + 1; // 創造一個亂數
        for (int j=0; j<count; j++) { // 開始跟之前的數比較
            if (random == num[j]) { // 如果重複的話nr就變false
                nr = false;
            }
        }
        if (nr) { // 如果沒重複的話nr還是true 所以就會進去 把亂數存進去 然後換下一格 重複的話就不會進去count也不會變所以while從頭來重新用一個亂數去比較
            num[count] = random;
            count++;
        }
    }
}

bool compare(int a[], int b[]){
    int rp=0, rn=0; // rp位置對數字也對 rn數字對而已
    for (int i=0; i<4; i++) {
        if (a[i]==b[i]) {
            rp++;
        }
        for (int j=0; j<4; j++) {
            if (a[i]==b[j] && i!=j) { // 第一層就比過一次 i==j的情況了 所以這邊不要再比一次 所以加一個 i!=j 的條件
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
        user_guess[3-i] = num%10; // 3-i是因為要讓它倒著存 如果沒加的話 假設num=1234 那 user_guess就會是[4,3,2,1] 但是我們要的是 [1,2,3,4] 所以讓他從最後面往前存
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