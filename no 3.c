#include<stdio.h>
int main(){
    int yearNumber;
    printf("Enter a year number: ");
    scanf("%d",&yearNumber);

    if(yearNumber%4 == 0){
        if( yearNumber%100 == 0){
            if ( yearNumber%400 == 0)
                printf("%d is a leap year.", yearNumber);
            else
                printf("%d is not a leap year.", yearNumber);
        }
        else
            printf("%d is a leap year.", yearNumber );
    }
    else
        printf("%d is not a leap year.", yearNumber);

    return 0;
}

