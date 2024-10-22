//
//  main.cpp
//  CppFilesManipulation
//
//  Created by João Gabriel valentim Theodoro on 29/09/24.
//

#include <iostream>
#include <fstream>

int main(int argc, const char * argv[]) {
//    std::string line;
//    std::ifstream file("file.txt");
//    std::string param;
//    bool number {false};
//    int i{1};
//    
//    if (argc > 1) {
//        param = argv[1];
//        if(param == "--number" || param == "-n") {
//            number = true;
//        }
//    }
//    
//    if (file.is_open()) {
//        std::cout << "Aberto" << '\n' << '\n';
//        while(getline(file, line)) {
//            if (number) {
//                std::cout << i << "\u2502" << line << '\n';
//                i++;
//            }
//            
//            if (!number) {
//                std::cout << line << '\n';
//            }
//        }
//        
//        file.close();
//    }
    
    std::string content, other;
    
    std::ofstream ofs;
    
    ofs.open("file.txt", std::ios_base::app);
    
    std::cout << "Informe uma linha => " << '\n';
    std::getline(std::cin, content);
    
    std::cout << "Informe outra linha => " << '\n';
    std::getline(std::cin, other);
    
    ofs << content << '\n';
    ofs << other << '\n';
    
    ofs.close();
    
		    
    return 0;
}
