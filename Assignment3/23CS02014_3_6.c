#include<stdio.h>
#include<math.h>
int digits(int n){
    int count = 0;
    while(n>0){
        n = n/10;
        count++;
    }
    return count;
}
int main(){
    printf("Enter Number:");
    int n;
    scanf("%d",&n);
    int n2 = ceil(pow(n,2));
    int x = n2;
    int flag = 0;
    for(int i = 1 ; i < digits(n2) ; i++){
        int a = x/pow(10,i);
        int c = ceil(pow(10,i));
        int b = x% c;
        
        if(a+b == n && b != 0){
            printf("Is Kaprekar Number");
            flag=1;
            break;
        }
        
    }
    if(flag == 0){
        printf("Not Kaprekar Number");
    }

}
