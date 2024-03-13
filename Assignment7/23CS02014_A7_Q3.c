#include<stdio.h>
#include<string.h>
void swap(char *x , char *y){
    char temp = *x;
    *x=*y;
    *y=temp;
}
void arrswap(char x[],int l , int r){
    if(l<=r){
    swap(x+l,x+r);
    arrswap(x,l+1,r-1);
    }
    else{
        return;
    }
}

int main(){
   char str[100];
    printf("Enter a string: ");
    gets(str);
    int l = 0;
    int r = strlen(str)-1;
    arrswap(str,l,r);
    printf("Reversed string: %s\n", str);
    return 0;
}