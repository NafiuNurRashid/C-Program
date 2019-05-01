#include<stdio.h>
int main(){
    int p;
    int num;
    int sum =0;

    printf("Enter a number: ");
    scanf("%d" , &num);

    for(p=1; p<=num; ++p){
        sum = sum + p;
    }

    printf("Sum of the number is: %d" , sum);
    return 0;
}
