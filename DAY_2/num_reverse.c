#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a Multidigit number : ");
    scanf("%d", &num);
    int original_num=num;
    int reversed_num=0;
    int last_digit;

    while (num != 0){
        last_digit=num%10;
        reversed_num = reversed_num*10 + last_digit;
        num/=10;
    }
    printf("Before reversal = %d : After reversal = %d\n", original_num,reversed_num);
    return 0;
}
