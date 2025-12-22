#include<stdio.h>
int main(){

    float operand1,operand2;
    char operator;

    printf("enter operand1 : ");
    scanf("%f", &operand1);
    printf("enter operand2 : ");
    scanf("%f", &operand2);

    printf("enter a operator from [+,-,*,/] : ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+' :
        printf("sum = %.2f\n", operand1+operand2);
        break;
    
        case '-' :
        printf("Difference = %.2f\n", operand1-operand2);
        break;

        case '*' :
        printf("product = %.2f\n", operand1*operand2);
        break;

        case '/' :
        if (operand2 == 0){
            printf("Division by 0 not allowed\nPlease give non zero value of operand2\n");
            break;
        }
        printf("Division = %.2f\n", operand1/operand2);
        break;
    
    default:
        printf("Invalid operator, Select from only four\n");
        break;
    }

    return 0;
}