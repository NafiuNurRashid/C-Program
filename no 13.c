#include<stdio.h>
int main(){
    int x,y,temp;

    printf("Enter the value of x : ");
    scanf("%d" , &x);
    printf("Enter the value of y : ");
    scanf("%d" , &y);

    printf("\nBefore swapping\tx: %d\ty: %d" , x,y);

    temp = x;
    x = y;
    y = temp;

    printf("\nAfter swapping\tx: %d\ty: %d" , x,y);

    return 0;
}
