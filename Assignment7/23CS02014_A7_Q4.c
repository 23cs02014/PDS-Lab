#include<stdio.h>
int largest(int arr[], int n){

    if(n==1){
        return arr[0];
    }
    else{
        int x = largest(arr,n-1);
        if(x>arr[n-1]){
            return x;
        }
        else{
            return arr[n-1];
        }
    }
    
}
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Largest element: %d", largest(arr,n));
    return 0;
}