#ifndef MATH_H
#define MATH_H

double pow(double number, double exp)
{
    double power{1};

    if (exp == 0)
    {
        return number;
    }

    for (int i = 1; i <= exp; i++)
    {
        power = power * number;
    }

    return power;
}

#endif