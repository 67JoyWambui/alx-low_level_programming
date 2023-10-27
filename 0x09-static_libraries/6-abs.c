#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @num: the number to be checked
 *
 * Return: -num if the number is less than 0 otherwise num
 */

int _abs(int num)
{

        if (num < 0)
                return (-num);

        else
                return (num);
}

