// Program to showcase array traversal
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }    
    printf("The array elements are:\n");
    for(int i = 0; i < n; i++){
        printf("The element at %d is: %d\n", i, arr[i]);
    }
    return 0;
}