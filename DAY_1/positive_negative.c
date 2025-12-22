#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);

    if (num > 0){
        printf("%d is positive number\n", num);
    }else if (num < 0)
    {
        printf("%d is negative number\n", num);
    }else{
        printf("%d is zero\n", num);
    }
    
    return 0;
}
