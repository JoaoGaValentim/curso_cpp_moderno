#include <iostream>

int main()
{
  int signed x = -1;  // com sinal
  int unsigned y = 1; // sem sinal

  char gender = 'M'; // '' e um valor só

  double height{1.8};

  std::string name{"Curso de C++ Moderno."}; // inicialização uniforme

  std::cout << x << '\n';
  std::cout << y << '\n';
  std::cout << gender << '\n';
  std::cout << height << '\n';
  std::cout << name << '\n';

  return 0;
}
