#include <iostream>
#include <stack>
#include <string>

int main(){

    std::stack<std::string> historico;
    int opcao;
    std::string acao;

    do{

        std::cout << "\n===== MENU =====" << std::endl;
        std::cout << "1 - Registrar ação" << std::endl;
        std::cout << "2 - Desfazer última ação" << std::endl;
        std::cout << "3 - Mostrar última ação" << std::endl;
        std::cout << "4 - Mostrar histórico" << std::endl;
        std::cout << "0 - Sair" << std::endl;
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;

        std::cin.ignore();

        switch(opcao){

            case 1:

                std::cout << "\nDigite a ação realizada: ";
                std::getline(std::cin, acao);

                // Adiciona a ação no topo da pilha
                historico.push(acao);

                std::cout << "Ação registrada com sucesso." << std::endl;

                break;

            case 2:

                // Verifica se existem ações para desfazer
                if (historico.empty()){

                    std::cout << "\nNão existem ações para desfazer." << std::endl;

                }
                else{

                    std::cout << "\nDesfazendo: " << historico.top() << std::endl;

                    // Remove a última ação registrada
                    historico.pop();
                }

                break;

            case 3:

                // Mostra a ação que está no topo da pilha
                if (historico.empty()){

                    std::cout << "\nO histórico está vazio." << std::endl;

                }
                else{

                    std::cout << "\nÚltima ação: " << historico.top() << std::endl;
                }

                break;

            case 4:

                // Mostra todas as ações começando pela mais recente
                if (historico.empty()){

                    std::cout << "\nO histórico está vazio." << std::endl;

                }
                else{

                    std::stack<std::string> copia = historico;

                    std::cout << "\n-- HISTÓRICO DE AÇÕES --" << std::endl;

                    while (!copia.empty()){

                        std::cout << "- " << copia.top() << std::endl;

                        copia.pop();
                    }
                }

                break;

            case 0:

                std::cout << "\nPrograma encerrado." << std::endl;

                break;

            default:

                std::cout << "\nOpção inválida." << std::endl;
        }

    } while(opcao != 0);

    return 0;
}
