#include <iostream>
#include <stack>
#include <string>

int main(){

    std::string palavra;
    std::stack<char> pilha;

    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;

    // Coloca cada caractere da palavra na pilha
    for (int i = 0; i < palavra.length(); i++){
        pilha.push(palavra[i]);
    }

    bool palindromo = true;

    // Compara os caracteres da palavra com os elementos da pilha
    for (int i = 0; i < palavra.length(); i++){

        if (palavra[i] != pilha.top()){
            palindromo = false;
            break;
        }

        pilha.pop();
    }

    // Exibe o resultado da verificação
    if (palindromo){
        std::cout << "\nA palavra " << palavra << " é um palíndromo.";
    }
    else{
        std::cout << "\nA palavra " << palavra << " não é um palíndromo.";
    }

    return 0;
}
