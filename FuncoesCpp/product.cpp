#include <iostream>

// criar protótipos evita queda de desempenho
// evita "BURACOS"
double product(double, double);

int main(int argc, char const *argv[])
{
    std::cout << "Valor de 10x10 é "
              << product(10, 10)
              << '\n';
    return 0;
}

double product(double x, double y)
{
    return x * y;
}