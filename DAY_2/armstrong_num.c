#include<stdio.h>
int main(){

    int num,temp,sum=0,digit=0;

    printf("enter a number : ");
    scanf("%d", &num);
    temp = num;

    if (num<0){
        printf("armstrong number is not defined for negative numbers\n");
        return 0;
    }

    while( temp!=0){
        digit++;
        temp/=10;
    }
    temp=num;

    while(temp!=0){
        int last=temp%10;
        int power_result=1;
        for(int i=0;i<digit;i++){
            power_result *= last;
        }
        sum += power_result;
        temp/=10;
    }
    if(num == sum){
        printf("%d is armstrong\n", num);
    }else{
        printf("%d is not armstrong\n", num);
    }

    return 0;
}