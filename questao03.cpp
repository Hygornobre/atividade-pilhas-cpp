#include <iostream>
#include <stack>
#include <string>

int main(){

    std::string texto;
    std::stack<char> pilha;

    std::cout << "Digite uma palavra ou frase: ";
    std::getline(std::cin, texto);

    // Coloca cada caractere da palavra ou frase na pilha
    for (int i = 0; i < texto.length(); i++){
        pilha.push(texto[i]);
    }

    std::cout << "\nTexto invertido: ";

    // Retira os caracteres da pilha na ordem inversa
    while (!pilha.empty()){
        std::cout << pilha.top();
        pilha.pop();
    }

    std::cout << "\n";

    return 0;
}
