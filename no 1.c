#include<stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d" , &n);
    if(n<0)
        n=n*-1;
        printf("\nThe absolute value of given number is: %d" , n);

        return 0;
}
