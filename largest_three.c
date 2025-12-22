#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1,num2,num3;
    
    printf("enter value of three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1>num2 && num1>num3){
        printf("%d is largest\n", num1);
    }else if(num2>num1 && num2>num3){
        printf("%d is largest\n", num2);
    }else{
        printf("%d is largest\n", num3);
    }
    return 0;
}
