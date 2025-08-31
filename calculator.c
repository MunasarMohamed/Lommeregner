#include "calculator.h"
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <tgmath.h>

void do_next_op(char operator, double operand, double* akkumulator) {
    if (operator == '+')
    {
        *akkumulator += operand;
        result_print(*akkumulator);
    }
    else if (operator == '-')
    {
        *akkumulator -= operand;
        result_print(*akkumulator);
    }
    else if (operator == '/')
    {
        if (operand !=0)
        {
            *akkumulator = *akkumulator / operand;
            result_print(*akkumulator);
        }
        else
        {
            result_print(*akkumulator);
        }
    }
    else if (operator == '*')
    {
        *akkumulator = *akkumulator * operand;
        result_print(*akkumulator);
    }
    else if (operator == '^')
    {
        *akkumulator = pow(*akkumulator,  operand);
        result_print(*akkumulator);
    }
    else if (operator == '#')
    {
        if (*akkumulator>0)
        {
            *akkumulator = sqrt(*akkumulator);
            result_print(*akkumulator);
        }
        else
        {
            result_print(*akkumulator);
        }
    }
    else if (operator == '%')
    {
        *akkumulator = *akkumulator * -1;
        result_print(*akkumulator);
    }
    else if (operator == '!')
    {
        *akkumulator = 1 / *akkumulator;
        result_print(*akkumulator);
    }
    else if (operator == 'q' || 'Q')
    {
        printf("Final result is: %lf\n", *akkumulator);
        exit(1);
    }

}

void scan_data(char* operator, double* operand)
{

    printf("Enter operator, and an optional operand:");
    scanf(" %c", operator);
    if (*operator == '+' || *operator == '-' || *operator == '/' || *operator == '*' || *operator == '^')
    {
        scanf("%lf", operand);
    }
}

void run_calculator()
{
    double akkumulator = 0.0;
    double operand;
    char operator = 's';

    while (true)
    {
        scan_data(&operator, &operand);

        do_next_op(operator, operand, &akkumulator);
    }

}

void result_print(double a) {
    printf("result so far is %lf \n", a);
}

