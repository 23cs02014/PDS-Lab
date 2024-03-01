#include <stdio.h>
void avg(int x[][7], int cities)
{

    for (int i = 0; i < cities; i++)
    {
        float avg = 0;
        for (int j = 0; j < 7; j++)
        {
            avg += x[i][j];
        }
        avg = avg / 7;
        printf("avg for city %d is %.2f\n", i, avg);
    }
}
int main()
{
  
    int c;
    printf("cities:");
    scanf("%d",&c);
      int a[c][7];
    for(int i = 0 ; i < c ; i++){
        printf("for city %d\n",i+1);
        for(int j = 0 ; j < 7 ; j++){
            printf("temp %d:",j+1);
            scanf("%d",&a[i][j]);
        }
    }
    avg(a, 3);
    return 0;
}
