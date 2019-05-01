#include<stdio.h>
int main(){
    int emp,otime,opay,hrs;
    for(emp=1; emp<=10; emp++){
        printf("\nEnter numbers of hours worked by %d employee: " , emp);
        scanf("%d" , &hrs);
        if(hrs>40){
            otime = hrs - 40;
            opay = otime* 12;
            printf("\nThe overtime pay of employee is: %d\n" , opay);
        }
        else if(hrs<40){
            printf("\nThere is no overtime pay for employee");
        }
    }

    getch();
    return 0;
}

