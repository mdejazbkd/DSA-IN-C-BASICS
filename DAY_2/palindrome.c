#include<stdio.h>
int main(){

    int num;
    int last;
    int reversed_num = 0;

    printf("enter a number : ");
    scanf("%d", &num);
    int original_num=num;

    if (num < 0) {
    printf("Negative numbers are not palindromes\n");
    return 0;
    }


    while (num != 0)
    {
        last=num%10;
        reversed_num=reversed_num*10 + last;
        num/=10;
    }

    if (original_num == reversed_num){
        printf("%d is a palindrome\n", original_num);
    }else{
        printf("%d is not palindrome\n", original_num);
    }

    return 0;
}