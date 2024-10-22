//
//  main.cpp
//  CppRecursive
//
//  Created by João Gabriel valentim Theodoro on 27/09/24.
//

#include <iostream>
#include <cstdlib>

//size_t function(size_t num) {
//    return (num <= 1) ? 1 : num * function(num-1);
//}
//
//int main(int argc, const char * argv[]) {
//    if(argc > 1) {
//        int num = atoi(argv[1]);
//        std::cout << "Fatorial !" << argv[1] <<  " = " << function(num) << '\n';
//    }
//    if(argc <= 1) {
//        std::cout << "Informe um número" << '\n';
//    }
//    return 0;
//}

size_t fibonacci(size_t num) {
    return (num <= 1) ? 1 : fibonacci(num - 1) + fibonacci(num - 2);
}

int main(int argc, const char * argv[]) {
    if(argc > 1) {
        int num = atoi(argv[1]);
        std::cout << '\t' << "Fibonnaci de " << argv[1] << '\n' << '\n';
        
        int i = 0;
        while (i < num) {
            std::cout << " " << fibonacci(i);
            i++;
        }
        
        std::cout << '\n';
    }
    
    if(argc <= 1) {
        std::cout << "Informe um número" << '\n';
    }
    
    return 0;
}
