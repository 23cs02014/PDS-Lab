#include<stdio.h>
int subset(int x[],int sizex,int y[], int sizey){
    int count=0;
    for(int i = 0 ; i < sizex; i++){
        for(int j = 0 ; j < sizey ; j++){
            if(x[i]==y[j]){
                count++;
            }
        }
    }
    if(count == sizey){
        return 1;
    }
    else{
        return 0;
    }

}
int main(){
    int size1,size2;
    printf("Enter size of first array:");
    scanf("%d",&size1);
    int a1[size1];
    for(int i = 0 ; i < size1 ; i++){
        printf("Enter %d index value:",i);
        scanf("%d",&a1[i]);
    }
    printf("Enter size of second array:");
    scanf("%d",&size2);
    int a2[size2];
    for(int i = 0 ; i < size2 ; i++){
        printf("Enter %d index value:",i);
        scanf("%d",&a2[i]);
    }

    if(subset(a1,size1,a2,size2)){
        printf("Is subset");
    }
    else{
        printf("Is not subset");
    }
    return 0;
}