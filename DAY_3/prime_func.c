#include<stdio.h>

int prime(int num){
    int i;
    int flag=1; // lets 1 be true by default
    if(num <= 1){
        flag = 0;
    }else{
        for (i=2;i<=num/2;i++){
            if(num % i == 0){
                flag = 0;
                break;
            }else{
                flag = 1;
            }
        }
    }
    return flag;
}

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int result = prime(num);
    if(result == 1){
        printf("%d is prime number\n", num);
    }else{
        printf("%d is not prime number\n", num);
    }

    return 0;
}