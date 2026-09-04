#include <iostream>

const int TAMANHO = 10;

int pilha[TAMANHO];
int topo = -1;

bool estaVazia();
bool estaCheia();

void empilhar(int valor){

    // Verifica se a pilha está cheia
    if (estaCheia()){
        std::cout << "A pilha está cheia." << std::endl;
        return;
    }

    topo++;
    pilha[topo] = valor;

    std::cout << "Elemento empilhado com sucesso." << std::endl;
}

void desempilhar(){

    // Verifica se a pilha está vazia
    if (estaVazia()){
        std::cout << "A pilha está vazia." << std::endl;
        return;
    }

    std::cout << "Elemento removido: " << pilha[topo] << std::endl;

    topo--;
}

void consultarTopo(){

    // Verifica se existe algum elemento na pilha
    if (estaVazia()){
        std::cout << "A pilha está vazia." << std::endl;
        return;
    }

    std::cout << "Elemento no topo: " << pilha[topo] << std::endl;
}

void exibirPilha(){

    // Verifica se a pilha está vazia
    if (estaVazia()){
        std::cout << "A pilha está vazia." << std::endl;
        return;
    }

    std::cout << "\n-- PILHA --" << std::endl;

    // Exibe os elementos começando pelo topo
    for (int i = topo; i >= 0; i--){
        std::cout << pilha[i] << std::endl;
    }
}

bool estaVazia(){

    // A pilha está vazia quando o topo vale -1
    return topo == -1;
}

bool estaCheia(){

    // A pilha está cheia quando o topo chega à última posição
    return topo == TAMANHO - 1;
}

int main(){

    int opcao;
    int valor;

    do{

        std::cout << "\n===== MENU =====" << std::endl;
        std::cout << "1 - Empilhar" << std::endl;
        std::cout << "2 - Desempilhar" << std::endl;
        std::cout << "3 - Consultar topo" << std::endl;
        std::cout << "4 - Exibir pilha" << std::endl;
        std::cout << "5 - Verificar se está vazia" << std::endl;
        std::cout << "6 - Verificar se está cheia" << std::endl;
        std::cout << "0 - Sair" << std::endl;
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;

        switch(opcao){

            case 1:

                std::cout << "Digite o valor: ";
                std::cin >> valor;

                empilhar(valor);
                break;

            case 2:

                desempilhar();
                break;

            case 3:

                consultarTopo();
                break;

            case 4:

                exibirPilha();
                break;

            case 5:

                if (estaVazia()){
                    std::cout << "A pilha está vazia." << std::endl;
                }
                else{
                    std::cout << "A pilha não está vazia." << std::endl;
                }

                break;

            case 6:

                if (estaCheia()){
                    std::cout << "A pilha está cheia." << std::endl;
                }
                else{
                    std::cout << "A pilha não está cheia." << std::endl;
                }

                break;

            case 0:

                std::cout << "Programa encerrado." << std::endl;
                break;

            default:

                std::cout << "Opção inválida." << std::endl;
        }

    } while(opcao != 0);

    return 0;
}
