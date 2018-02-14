#include <stdio.h>

int main() {

    float result, num1, num2, num3;
    char op1, op2;

    printf("Enter an expression: ");
    scanf("%f%c%f%c%f", &num1, &op1, &num2, &op2, &num3);

    if (op2 == ' ' && num3 == 0) {

        if (op1 == '+')
            result = num1 + num2;
        else if (op1 == '-')
            result = num1 - num2;
        else if (op1 == '*')
            result = num1 * num2;
        else 
            result = num1 / num2;

    } else {

        if (op1 == '+' && op2 == '+')
            result = (num1 + num2) + num3;
        else if (op1 == '+' && op2 == '-')
            result = (num1 + num2) - num3;
        else if (op1 == '+' && op2 == '*')
            result = (num1 + num2) * num3;
        else if (op1 == '+' && op2 == '/')
            result = (num1 + num2) / num3;
        else if (op1 == '-' && op2 == '-')
            result = (num1 - num2) - num3;
        else if (op1 == '-' && op2 == '+')
            result = (num1 - num2) + num3;
        else if (op1 == '-' && op2 == '*')
            result = (num1 - num2) * num3;
        else if (op1 == '-' && op2 == '/')
            result = (num1 - num2) / num3;
        else if (op1 == '*' && op2 == '*')
            result = (num1 * num2) * num3;
        else if (op1 == '*' && op2 == '+')
            result = (num1 * num2) + num3;
        else if (op1 == '*' && op2 == '-')
            result = (num1 * num2) - num3;
        else if (op1 == '*' && op2 == '/')
            result = (num1 * num2) / num3;
        else if (op1 == '/' && op2 == '/')
            result = (num1 / num2) / num3;
        else if (op1 == '/' && op2 == '+')
            result = (num1 / num2) + num3;
        else if (op1 == '/' && op2 == '-')
            result = (num1 / num2) - num3;
        else 
            result = (num1 / num2) * num3;

    }
        

    printf("Value of expression: %.2f\n", result);

    return 0;
}
