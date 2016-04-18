#include<stdio.h>
#include<stdlib.h>

int main(void){
    for (int i=1; i<12; i++) {
        float sum=0;
        printf("s = ");
        for (int j=1; j<=i; j++) {
            if (j==1) {
                printf("1/1 ");
                sum += 1;
            }
            else if (j%2==1){
                printf("+ 1/%d ", j);
                sum += (1.0/j);
            }
            else{
                printf("- 1/%d ", j);
                sum -= (1.0/j);
            }
        }
        printf("= %.3f\n", sum);
    }
}