#include<stdio.h>
int main(){
    int array[100];
    int i,max,min,size;

    printf("Enter the size of array: ");
    scanf("%d" , &size);

    printf("Enter the numbers of the array:\n");
    for(i=0 ;i<size; i++){
        scanf("%d" , &array[i]);
    }

    max = array[0];
    min = array[0];

    for(i=1; i<size; i++){
        if(array[i]>max){
            max = array[i];
        }
        if(array[i]<min){
            min = array[i];
        }
    }

    printf("Biggest Number: %d\n" , max);
    printf("Smallest Number: %d" , min);
    printf("\nDifference between biggest and  smallest number is :%d",max-min);

    return 0;

}
