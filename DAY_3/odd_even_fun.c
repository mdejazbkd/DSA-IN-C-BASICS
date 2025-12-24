#include<stdio.h>
void odd_even(int num){
    if (num % 2 == 0){
        printf("%d is even number\n", num);
    }else{
        printf("%d id odd number\n", num);
    }
}

int main(){
    int num;
    printf("enter the number : ");
    scanf("%d", &num);

    odd_even(num);
    return 0;
}