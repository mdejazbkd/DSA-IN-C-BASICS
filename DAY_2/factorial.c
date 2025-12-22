#include<stdio.h>
int main(){

    int num,factorial=1;
    printf("enter a number : ");
    scanf("%d", &num);

    if (num < 0) {
    printf("Factorial not defined for negative numbers\n");
    return 0;
    }
    else if (num == 1){
        factorial=1;
    }else{
        for(int i = 1; i<=num; i++){
            factorial*=i;
        }
    }
    
    printf("factorial of %d = %d\n",num, factorial );
    return 0;
}