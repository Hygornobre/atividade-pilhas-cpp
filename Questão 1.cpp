#include <iostream>
#include <stack>

int main(){

    std::stack<int> pilha;
    int numero;

    for (int i = 0; i < 5; i++){

        std::cout << "Digite o " << i + 1 << " numero: ";
        std::cin >> numero;

        pilha.push(numero);
    }

    std::cout << "\n";
    std::cout << "Elemento no topo: " << pilha.top() << std::endl;

    std::cout << "\n";
    std::cout << "Quantidade de elementos: " << pilha.size() << std::endl;

    std::cout << "\n";
    pilha.pop();

    std::cout << "Elemento do topo removido." << std::endl;

    std::cout << "\n";
    std::cout << "Novo elemento no topo: " << pilha.top() << std::endl;

    return 0;
}
