#include <iostream>
#include <stack>
#include <string>

int main(){

    std::string expressao;
    std::stack<char> pilha;

    std::cout << "Digite uma expressão: ";
    std::getline(std::cin, expressao);

    bool valida = true;

    // Percorre todos os caracteres da expressão
    for (int i = 0; i < expressao.length(); i++){

        char caractere = expressao[i];

        // Empilha os símbolos de abertura
        if (caractere == '(' || caractere == '[' || caractere == '{'){
            pilha.push(caractere);
        }

        // Verifica os símbolos de fechamento
        else if (caractere == ')' || caractere == ']' || caractere == '}'){

            // Verifica se existe algum símbolo de abertura
            if (pilha.empty()){
                valida = false;
                break;
            }

            char topo = pilha.top();

            // Verifica se os símbolos correspondem
            if ((caractere == ')' && topo != '(') ||
                (caractere == ']' && topo != '[') ||
                (caractere == '}' && topo != '{')){

                valida = false;
                break;
            }

            // Remove o símbolo correspondente da pilha
            pilha.pop();
        }
    }

    // Verifica se ficaram símbolos de abertura na pilha
    if (!pilha.empty()){
        valida = false;
    }

    // Exibe o resultado
    if (valida){
        std::cout << "\nA expressão é válida.";
    }
    else{
        std::cout << "\nA expressão é inválida.";
    }

    return 0;
}
