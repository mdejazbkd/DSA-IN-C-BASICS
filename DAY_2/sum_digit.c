#include<stdio.h>
int main()
{
    int num, sum=0,last;

    printf("Enter a Number : ");
    scanf("%d", &num);

    while (num != 0){
        last = num % 10;
        sum+=last;
        num/=10;
    }
    printf("sum of digits = %d\n", sum);
    
    return 0;
}
