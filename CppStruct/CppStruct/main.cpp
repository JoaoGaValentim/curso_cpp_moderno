//
//  main.cpp
//  CppStruct
//
//  Created by João Gabriel valentim Theodoro on 29/09/24.
//

#include <iostream>

typedef struct {
    std::string name;
    std::string lastName;
    int id;
} t_Client;

void showClient(t_Client c) {
    std::cout << "::::: DADOS DO CLIENTE :::::" << '\n';
    std::cout << c.name << " " << c.lastName << " - " << c.id << '\n';
}

t_Client getData(t_Client client) {
    return client;
}

int main(int argc, const char * argv[]) {
    t_Client client{"João Gabriel", "Valentim Theodoro", 11};
    std::cout << getData(client).name << '\n';
    std::cout << getData(client).lastName << '\n';
    std::cout << getData(client).id << '\n';
    return 0;
}
