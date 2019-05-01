#include <stdio.h>
int main(){
    int arr[100];
    int i, size, num, p;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in array:\n");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to insert: ");
    scanf("%d", &num);
    printf("\nEnter the element position: ");
    scanf("%d", &p);

    if(p > size+1 || p <= 0){
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else{
        for(i=size; i>=p; i--){
            arr[i] = arr[i-1];
        }
        arr[p-1] = num;
        size++;

        printf("Array elements after insertion: ");
        for(i=0; i<size; i++){
            printf("%d\t", arr[i]);
        }
    }

    printf("\n\nEnter the element position to delete: ");
    scanf("%d", &p);

    if(p==size+1 || p<0){
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else{
        for(i=p-1; i<size-1; i++){
            arr[i] = arr[i + 1];
        }
        size--;
    }

    printf("\nElements of array after deleting: ");
    for(i=0; i<size; i++){
        printf("%d\t", arr[i]);
    }

    return 0;
}
