//
//  project.cpp
//  DecimalBinaryParser
//
//  Created by João Gabriel Valentim Theodoro on 21/10/24.
//

#include "project.hpp"
#include <iostream>

std::string showBinaryValue(size_t &decimalValue) {
    std::string result;
    
    if (decimalValue == 0) {
        return "0";
    }
    
    while (decimalValue > 0) {
        result += std::to_string(decimalValue % 2); // Armazena o dígito binário
        decimalValue /= 2;  // Divide por 2 para reduzir o número
    }
    
    std::reverse(result.begin(), result.end()); // Inverte a string para a ordem correta
    
    return result;
}

std::string showDecimalValue(size_t &binValue) {
    size_t decimalValue = 0;
    size_t base = 1;  // Representa 2^0 inicialmente

    // Enquanto houver dígitos no número binário
    while (binValue > 0) {
        size_t lastDigit = binValue % 10;  // Obtém o último dígito do número binário
        decimalValue += lastDigit * base;  // Converte para decimal somando o valor correspondente
        base *= 2;  // Atualiza a base (2^1, 2^2, ...)
        binValue /= 10;  // Remove o último dígito do número binário
    }

    return std::to_string(decimalValue);  // Converte o valor decimal para string
}
