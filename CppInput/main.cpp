#include <iostream>

int main(int argc, char const *argv[])
{
    const int size{99};
    char letter[size];

    std::cout << "Informe uma letra: " << '\n';
    std::cin.getline(letter, 99); // char with size
    std::cout << "Letra informada = " << letter << '\n';

    std::string name{};

    std::cout << "Informe seu nome: " << '\n';
    std::getline(std::cin, name); // string catch
    std::cout << "Nome informao = " << name << '\n';

    return 0;
}
