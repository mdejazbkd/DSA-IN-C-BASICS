#include<stdio.h>
void max(int x, int y){
    if (x > y){
        printf("%d is maximum\n", x);
    }else{
        printf("%d is maximum\n", y);
    }
}

int main(){
    int num1,num2;
    printf("enter two numbers : ");
    scanf("%d %d", &num1,&num2);

    max(num1,num2);

    return 0;
}