#include <iostream>

int main(int argc, char const *argv[])
{
    int number{1};

    std::cout << "WHILE" << "\n";

    while (number <= 10)
    {
        std::cout << "Número " << number << '\n';
        number++;
    }

    std::cout << "DO/WHILE" << '\n';

    do
    {
        std::cout << "Número " << number << '\n';
        number++;
    } while (number <= 10);

    std::cout << "FOR" << '\n';

    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "Esse número é " << i << '\n';
    }

    std::cout << "FOR com Arrays" << '\n';

    std::string names[]{"João", "Maria", "Lucas", "Fernanda"};

    int size = sizeof(names) / sizeof(names[0]);

    for (size_t i = 0; i < size; i++)
    {
        std::cout << i << ": " << names[i] << '\n';
    }

    std::cout << "FOR IN" << '\n';

    for (auto name : names)
    {
        std::cout << "- " << name << '\n';
    }

    for (size_t i = 0; i < 15; i++)
    {
        for (size_t k = 0; k < i + 1; k++)
        {
            std::cout << "*";
        }

        for (size_t j = 15; j > 0; j--)
        {
            std::cout << " ";
        }

        std::cout << '\n';
    }

    return 0;
}
