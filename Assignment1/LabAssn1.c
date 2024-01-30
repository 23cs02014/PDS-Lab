#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<float.h>
int main(){
//Q1
printf("\n");
printf("\nQ1");
printf("\nName:Vikranth Mallru");
printf("\nRoll:23CS02014");
printf("\nBranch: COmputer Science and Engineering");
//Q2
printf("\n");
printf("\nQ2");
for(int i  = 0 ; i < 6 ; i++){
    for(int j = 1 ; j <= i ; j++){
        printf("*");
    }
    printf("\n");
}
//Q3
printf("\n");
printf("\nQ3");
printf("\n");
int x;
long int y;
float z;
// printf("Input values of x , y , z :");
// scanf("%d,%ld,%f",&x,&y,&z);
printf("address of x:%d , address of y:%d , address of z:%d",&x,&y,&z);
//Q4
printf("\n");
printf("\nQ4");
double e = 2.718281828;
printf("\n%.0f",e);
printf("\n%.1f",round(e));
printf("\n%.1f",e);
printf("\n%.2f",e);
printf("\n%.6f",e);
printf("\n%.6f",e);
printf("\n%.7f",e);
//printf("\n%.9f",e);
//Q5
printf("\n");
printf("\nQ5");
int a = 1 , b = 12 , c = 123 , d = 1234 , f = 12345;//%4s
char var[] = "a";
char var1[] = "ab";
char var2[] = "abc";
char var3[] = "abcd";
char var4[] = "abcde";


printf("\n0000%d",a);
printf("\n000%d",b);
printf("\n00%d",c);
printf("\n0%d",d);
printf("\n%d",f);
printf("\n");
printf("\n%5s",var);
printf("\n%5s",var1);
printf("\n%5s",var2);
printf("\n%5s",var3);
printf("\n%5s",var4);
printf("\n");




//Q6

    //a)
    printf("\n");
    printf("\nQ6(a)");
printf("\n");
int v = 2147483647;
printf("\n%d",v);
printf("\n%d",v+1);
printf("\n%d",v+2);
    //b)
    printf("\n");
    printf("\nQ6(b)");
printf("\n");
long int vl = 2147483647;
printf("\n%ld",vl);
printf("\n%ld",vl+1);//exception in c, "long int" is treated as "int" in c, but "long long int" is treated differently.
printf("\n%ld",vl+2);

long long int vll = 2147483647;
printf("\n%lld",vll);
printf("\n%lld",vll+1);//"long long int" is used when "int" cant hold high enough value.
printf("\n%lld",vll+2);

short int vs = 100;
printf("\n%d",vs);//"short int" is used for smaller values as it is more space efficient.
    //c)
    printf("\n");
    printf("\nQ6(c)");
printf("\n");   
printf("\nint max =%d",INT_MAX);
printf("\nint min =%d",INT_MIN);
printf("\n");
printf("\nfloat max =%f",FLT_MAX);
printf("\nfloat min =%f",FLT_MIN);
printf("\n");
printf("\ndouble max =%lf",DBL_MAX);
printf("\ndouble min =%lf",DBL_MIN);
printf("\n");
    //d)
    printf("\n");
    printf("\nQ6(d)");
    printf("\n");
int l = 10.5;
int m = 12.2;
 printf("Remainder of division of long float/short int = %d",m%l);// modulus operands have to be "int".Its output is also an "Int".


return 0;
}

