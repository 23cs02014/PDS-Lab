#include<stdio.h>
int main(){
    printf("Enter Sides a,b,c:");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("They are sides of Triangle");
    }
    else{
        printf("They are NOT sides of Triangle");
    }
    return 0;
}