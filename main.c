#include <stdio.h>

int number_add(int number, int other_number)
{
    return number + other_number;
}

int number_subtract(int number, int other_number)
{
    return number - other_number;
}

// in progress
int number_multiply(int number, int other_number)
{
    for (int index = 0; index < 4; index++)
    {
        int digit = number % 10
    }

    int remainder = number % 1000;
    int quotient = number / 1000;

    int other_remainder = other_number % 1000;
    int other_quotient = other_number / 1000;

    // we can't simply write (number * other_number) / 1000, as that will cause tons of overflows

    return (quotient * other_quotient * 1000) + (quotient * other_remainder) + (remainder * other_quotient) + ((remainder * other_remainder) / 1000);
}

int number_divide(int number, int other_number)
{
    if (number == other_number)
    {
        return 1000;
    }

    int amount_of_iterations = 0;
    int amount_of_other_iterations = 0;

    int another_number = other_number;
    int some_other_number = 0;

    while (some_other_number != number)
    {
        if (some_other_number > number)
        {
            some_other_number -= another_number;
            amount_of_other_iterations--;

            another_number /= 10;

            if (another_number == 0)
            {
                break;
            }

            amount_of_iterations++;
            amount_of_other_iterations *= 10;

            continue;
        }

        some_other_number += another_number;
        amount_of_other_iterations++;
    }

    int yet_another_number = amount_of_other_iterations * 1000;

    while (amount_of_iterations != 0)
    {
        yet_another_number /= 10;

        amount_of_iterations--;
    }

    return yet_another_number;
}

int main(int amount_of_arguments, char const *arguments[])
{
    printf("%d\n", number_multiply(3000, 333));

    return 0;
}
