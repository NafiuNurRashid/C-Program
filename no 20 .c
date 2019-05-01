#include<stdio.h>
int main(){
    char name[100];
    int age ,salary;

    printf("Enter name: ");
    scanf("%s" , &name);

    printf("\nEnter age: ");
    scanf("%d" , &age);

    printf("\nEnter salary: ");
    scanf("%d" , &salary);

    if(age > 30 &&  salary > 1000000){
        printf("\nYou are successful");
    }
    else{
        printf("\nGood luck with life ahead.");
    }

    return 0;
}
