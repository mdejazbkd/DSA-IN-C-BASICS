#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int flag=1;

    printf("enter a number : ");
    scanf("%d", &num);

    if (num<=1){
        flag = 0;
    }else{
        for (int i=2;i<= num/2; i++){
            if(num % i == 0){
                flag = 0;
                break;
            }
        }
    }


    if (flag==1){
        printf("%d is a prime number\n", num);
    }else{
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
