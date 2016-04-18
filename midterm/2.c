#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num, floor;
    printf("how many digits: ");
    scanf("%d", &floor);
    printf("number to display <0-9>: ");
    scanf("%d", &num);
    for (int i=floor; i>=1; i--) {
        for (int j=1; j<=i; j++) {
            printf("%d", num);
        }
        printf("\n");
    }
    for (int i=2; i<=floor; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d", num);
        }
        printf("\n");
    }
}