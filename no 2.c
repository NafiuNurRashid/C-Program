#include<stdio.h>
int main(){
    int array[3]={1,2,3};
    int r=0 , c=0, temp;
    for(r=0; r<3; r++){
        for(c=r+1; c<3; c++){
            if(array[r]>array[c]){
                temp=array[r];
                array[r]=array[c];
                array[c]=temp;
            }
        }
    }
    printf("Given number: ");
    for(r=0; r<3; r++){
        printf("%d" , array[r]);
    }

    printf("\n\nReverse order: ");
    for(r=2;r>-1;r--){
        printf("%d" , array[r]);
    }

    return 0;
}
