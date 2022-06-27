#include <stdio.h>


int sum (num1, num2, operator){
    int result;
    if(operator == '+' ){
        result = num1 + num2;
    }else if(operator == '-'){
        result = num1 - num2;
    }else if(operator == '*'){
        result = num1 * num2;
    } else if(operator == '/'){
        result = num1 / num2;
    } else{
        result = printf("Invalid Operator\n");
    }
    return result;
}

int main() {
    int num1;
    int num2;
    char operator;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter an operator: ");
    scanf(" %c", &operator);
    printf("Enter a number: ");
    scanf("%d", &num2);
    printf("The sum is: %d", sum(num1, num2, operator));
        return 0;
}
