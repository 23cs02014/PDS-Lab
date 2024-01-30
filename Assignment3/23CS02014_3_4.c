#include<stdio.h>
int main(){
    int p1x,p1y,p2x,p2y,p3x,p3y;
    printf("Enter point 1:");
    scanf("%d %d",&p1x,&p1y);
    printf("Enter point 2:");  
    scanf("%d %d",&p2x,&p2y);
    printf("Enter point 3:");
    scanf("%d %d",&p3x,&p3y);
  if((p3y-p1y)*(p2x-p1x) == (p3x-p1x)*(p2y-p1y)){
        printf("Points are collinear");
    }
    else{
        printf("Points are not collinear");
  }
return 0;
}