#include <stdio.h>
int main (){
    int num, divisor;
    printf("Enter a number: ");
    scanf ("%d", &num);
    printf("\nPrime factors of the number: ");
    divisor = 2;

      while (num > 1){
            while (num % divisor == 0){
                printf("%d ", divisor);
                num /= divisor;
          }
          divisor++;
          }

                 getch();
                 return 0;

}

