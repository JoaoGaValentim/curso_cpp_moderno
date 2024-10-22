#include <iostream>

int main(int argc, char const *argv[])
{
    std::string names[6]{"João", "Maria", "Ana", "Lucas", "Luis", "Lara"};

    std::cout << "After = " << names[0] << '\n';

    names[0] = "João Gabriel";

    std::cout << "Before = " << names[0] << '\n';

    double studentsNotes[5][4]{
        {10, 10, 10, 10},
        {9, 7.5, 10, 10},
        {9, 8, 9.2, 10},
        {9, 8, 9.2, 10},
        {9, 8, 9.2, 10}};

    std::cout << "Aluno "
              << names[0]
              << "Notas = "
              << studentsNotes[0][1] << '\n';

    int size = sizeof(names) / sizeof(names[0]);

    std::cout << size << '\n';

    return 0;
}
