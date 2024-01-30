#include<stdio.h>
int main(){
    int T,M,W,N,K;
    printf("Enter Marks:");
    scanf("%d",&M);
    printf("Enter Number of classes attended:");
    scanf("%d",&N);
    printf("Enter Number of classes conducted:");
    scanf("%d",&K);
    W = N/K;
    T = M * W;
    if(M<0 || M>100 || N>K){
        printf("Invalid Input");
        return 0;
    }
    else
    if(T>=90){
        printf("Final score = %d\n",T);
        printf("Grade is = EX");
    }
    else if(T>=80 && T<=89){
        printf("Final score = %d\n",T);
        printf("Grade is = A");
    }
    else if(T>=70 && T<=79){
        printf("Final score = %d\n",T);
        printf("Grade is = B");
    }
    else if(T>=60 && T<=69){
        printf("Final score = %d\n",T);
        printf("Grade is = C");
    }
    else if(T>=50 && T<=59){
        printf("Final score = %d\n",T);
        printf("Grade is = D");
    }
    else if(T>=40 && T<=49){
        printf("Final score = %d\n",T);
        printf("Grade is = P");
    }
    else if(T<40){
        printf("Final score = %d\n",T);
        printf("Grade is = F");
    }
    return 0;
    //The question didnt specify what to do for the Final Score values of 89,79,69,59,49;so I have taken the liberty to assume that the grade will be the next grade in the sequence.
}