//Program to merge two arrays
#include<stdio.h>

int main(){
    int n1, n2;
    printf("1st Array\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements: ", n1);
    for(int i = 0; i < n1; i++){
        scanf("%d", &arr1[i]);
    }    
    printf("The array elements are:\n");
    for(int i = 0; i < n1; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("2nd array\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements: ", n2);
    for(int i = 0; i < n2; i++){
        scanf("%d", &arr2[i]);
    }    
    printf("The array elements are:\n");
    for(int i = 0; i < n2; i++){
        printf("%d ", arr2[i]);
    }
    int arr3[n1 + n2];
    for(int i = 0; i < n1; i++){
        arr3[i] = arr1[i];
    }
    for(int i = 0; i < n2; i++){
        arr3[n1 + i] = arr2[i];
    }
    printf("\n");
    printf("The merged array is: ");
    for(int i = 0; i < (n1+n2); i++){
        printf("%d ", arr3[i]);
    }
return 0;
}