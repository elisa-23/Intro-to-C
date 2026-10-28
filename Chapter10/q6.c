/* Some calculators(notably those from Hewlett - Packard) use a system of writing mathematical expressions known as Reverse Polish Notation(RPN).In this notation, operators are placed after their operands instead of between their operands.For example, 1 + 2 would be written 1 2 + in RPN, and 1 + 2 * 3 would be written 1 2 3 * +. RPN expressions can easily be evaluated using a stack.The algorithm involves reading the operators and operands in an expression from left to right, performing the following actions :

    When an operand is encountered, push it onto the stack.
    When an operator is encountered, pop its operands from the stack, perform the operation on those operands, and then push the result onto the stack.

Write a program that evaluates RPN expressions.The operands will be single-digit integers.The operators are +, -, *, /, and =. The = operator causes the top stack item to be displayed;
afterwards, the stack is cleared and the user is prompted to enter another expression.The process continues until the user enters a character that is not an operator or operand :

    Enter an RPN expression : 1 2 3 * + =
    Value of expression : 7
    Enter an RPN expression : 5 8 * 4 9 - / =
    Value of expression : -8
    Enter an RPN expression : g

If the stack overflows, the program will display the message Expression is too complex and terminate.If the stack underflows(because of an expression such as 1 2 ++), the program will display the message Not enough operands in expression and terminate.Hints : Incorporate the stack code from Section 10.2 into your program. Use scanf(" %c", &ch) to read the operators and operands. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];
int top = 0;

void push(int value) // Pushes a value onto the stack
{
    if (top >= MAX_STACK_SIZE)
    {
        printf("Expression is too complex\n");
        exit(EXIT_FAILURE);
    }
    stack[++top] = value;
}

int pop()
{
    if (top < 0)
    {
        printf("Not enough operands in expression\n");
        exit(EXIT_FAILURE);
    }
    return stack[top--];
}

int main()
{
    char ch;
    int operand1, operand2, result;

    while (true)
    {
        printf("Enter an RPN expression: ");
        while (scanf(" %c", &ch) == 1) // Read a character from input; reads until a non-whitespace character is found
        {
            if (ch >= '0' && ch <= '9')
            {
                push(ch - '0'); // Convert char to int and push onto stack
            }
            else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                operand2 = pop(); // Pop the second operand from the stack
                operand1 = pop(); // Pop the first operand from the stack
                switch (ch)
                {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    if (operand2 == 0)
                    {
                        printf("Division by zero error\n");
                        exit(EXIT_FAILURE);
                    }
                    result = operand1 / operand2;
                    break;
                }
                push(result);
            }
            else if (ch == '=')
            {
                printf("Value of expression: %d\n", pop());
                top = -1;
                break;
            }
            else
            {
                return 0;
            }
        }
    }
}
