//Program to showcase deletion in array
#include<stdio.h>

int main(){
    int n, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The original array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Select the position from 1 to %d from which you want to delete the element: ", n);
    scanf("%d", &pos);
    for(int i = pos - 1; i < n - 1; i++){
        arr[i] = arr[i+1];
    }
    n--;
    printf("The updated array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
return 0;
}