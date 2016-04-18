#include<stdio.h>
#include<stdlib.h>

int main(void){
    int cost, person=0, max=0, lottery=0, sum=0;
    printf("cost=");
    scanf("%d", &cost);
    while (cost != -1) {
        if (cost > max) {
            max = cost;
        }
        if (cost >= 1 && cost <= 10000) {
            person++;
            lottery++;
            sum += cost;
        }
        else if (cost >= 10001 && cost <= 20000){
            person++;
            lottery += 2;
            sum += cost;
        }
        else if (cost >= 20001 && cost <= 50000){
            person++;
            lottery += 3;
            sum += cost;
        }
        else if(cost > 50000){
            person++;
            lottery += 5;
            sum += cost;
        }
        else{
            printf("Input Error!\n");
        }
        printf("cost=");
        scanf("%d", &cost);
    }
    printf("Total %d persons\n", person);
    printf("Lottery: %d\n", lottery);
    printf("Highest cost: %d\n", max);
    printf("Average: %.3f\n", (float)sum/person);
    
}