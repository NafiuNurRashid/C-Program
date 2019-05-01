#include<stdio.h>
int main(){
    int arr[100];
    int i, n, sum=0;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array:\n", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        sum = sum + arr[i];
    }

    printf("\nSum of all elements of array is: %d", sum);

    return 0;
}
