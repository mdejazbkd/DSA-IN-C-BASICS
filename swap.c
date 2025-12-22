#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,temp;
    printf("enter value of a : ");
    scanf("%d", &a);
    printf("enter value of b : ");
    scanf("%d", &b);

    printf("before swap a=%d and b=%d\n", a,b);

   temp=a;
   a=b;
   b=temp;

    printf("after swap a=%d and b=%d\n", a,b);

    return 0;
}
