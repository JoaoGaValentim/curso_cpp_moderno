//
//  main.cpp
//  CppVectorss
//
//  Created by João Gabriel valentim Theodoro on 20/09/24.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::vector<std::string> names{"João", "Maria"};
    names.push_back("Clara");
    names.pop_back();
    std::vector<std::string>::iterator start = names.begin();
    std::vector<std::string>::iterator end = names.end();
    
    
    std::cout << "First element: " << *start << '\n';
    std::cout << "Last element: " << *end << '\n';
    std::cout << "Size Vector: " << names.size() << '\n';
    
    std::string cpf{"222.222.111-11"};
    
    std::cout << "CPF = " << cpf << '\n';

    // cpf clean . & -
    // use <algorithm>
    
    cpf.erase(std::remove(cpf.begin(), cpf.end(), '.'), cpf.end());
    cpf.erase(std::remove(cpf.begin(), cpf.end(), '-'), cpf.end());
    
    std::cout << "CPF NUMBERS = " << cpf << '\n';
    
    return 0;
}
