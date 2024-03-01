#include<stdio.h>
void swap(int *x , int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}
void arrswap(int x[],int l , int r){
    swap(x+l,x+r);
    if(l<=r){
    arrswap(x,l+1,r-1);
    }
    else{
        return;
    }
}

int main(){
   int a[5]={1,2,3,4,5};
    int l = 0;
    int r = sizeof(a)/sizeof(a[0])-1;
    arrswap(a,l,r);
    for(int i = 0 ; i < sizeof(a)/sizeof(a[0]) ; i++){
        printf("%d ",a[i]);
    }
    return 0;
}