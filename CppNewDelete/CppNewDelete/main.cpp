//
//  main.cpp
//  CppNewDelete
//
//  Created by João Gabriel valentim Theodoro on 27/09/24.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::string *pointerStr = nullptr;
    pointerStr = new std::string[8];
    std::cout << "Digite algo: " << '\n';
    std::getline(std::cin, (*pointerStr));
    std::cout << "Você Digitou " << *pointerStr << '\n';
    
    delete[] pointerStr;
    pointerStr = NULL;
    return 0;
}
