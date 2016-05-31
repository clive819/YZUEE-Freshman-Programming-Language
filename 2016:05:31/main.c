/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/05/31
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void modify_file_name(char str[]){
    int pos=0;
    char cpp[] = ".cpp";
    while (str[pos] != '\0') {
        bool match = true;
        for (int i=0; i<4; i++) {
            if (str[pos+i] != cpp[i]) {
                match=false;
            }
        }
        if (match) {
            break;
        }
        pos++;
    }
    str[pos+2] = '\0';
}

int main(){
    char path[80];
    printf("Enter a file path: ");
    gets(path);
    printf("%s -> ", path);
    modify_file_name(path);
    printf("%s\n", path);
    float origin[] = {4.4, 3.3, 2.2, 5.5, 1.1, 6.6, 7.7, 10.0, 9.9, 8.8};
    printf("Before sorting: ");
    for (int i=0; i<10; i++) {
        printf("%.1f ", origin[i]);
    }
    for (int i=0; i<10; i++) {
        float max = 0;
        int pos=-1;
        for (int j=i; j<10; j++) {
            if (origin[j] > max) {
                max = origin[j];
                pos = j;
            }
        }
        if (pos!=-1) {
            float tmp = origin[i];
            origin[i] = max;
            origin[pos] = tmp;
        }
    }
    printf("\nAfter sorted: ");
    for (int i=0; i<10; i++) {
        printf("%.1f ", origin[i]);
    }
    putchar('\n');
}