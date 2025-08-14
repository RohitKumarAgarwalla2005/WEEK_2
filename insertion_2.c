//Program to showcase insertion in array
#include<stdio.h>

int main(){
    int n, pos, val;
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
    printf("Select the position from 1 to %d in which you want to insert the new element: ", n + 1);
    scanf("%d", &pos);
    printf("Enter the desired value: ");
    scanf("%d", &val);
    for(int i = n; i >= pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos - 1] = val;
    n++;
    printf("The updated array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
return 0;
}