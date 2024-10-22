#include <iostream>

int main(int argc, char const *argv[])
{
    int age{18};

    char gender{'M'};

    (age >= 18) ? std::cout << "Maior de Idade" << '\n'
                : std::cout << "Menor de Idade" << '\n'; // ternaria

    // if & else
    if (age >= 18)
    {
        std::cout << "Maior de Idade" << '\n';
    }

    if (age < 18)
    {
        std::cout << "Menor de Idade" << '\n';
    }

    // case
    switch (gender)
    {
    case 'M':
        std::cout << "Male" << '\n';
        break;

    case 'F':
        std::cout << "Female" << '\n';
        break;

    default:
        std::cout << "Invalid gender" << '\n';
        break;
    }

    std::cout << (gender == 'M' ? "Homem" : "Mulher") << '\n'; // maneira mais elegante

    return 0;
}
