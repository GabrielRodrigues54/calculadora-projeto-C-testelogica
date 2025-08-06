

// << operador de inserçao
// >> operador de extração

#include <iostream>
#include <locale>


using namespace std;

int main() {
    std::setlocale(LC_ALL, "pt_BR.UTF-8");

	int opcao; // Variável para a opção
	double numero1, numero2; // Variáveis para os números

    do {
		cout << "\n CALCULADORA " << endl; // Exibe o título da calculadora
        cout << "1. Soma" << endl;
        cout << "2. Subtração" << endl;
        cout << "3. Multiplicação" << endl;
        cout << "4. Divisão" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;

		if (cin.fail()) { // Verifica se a entrada é válida
            
            cout << "Opção inválida!" << endl;
            
        }

		if (opcao >= 1 && opcao <= 4) { // Verifica se a opção é válida
            cout << "Digite um número: "; 
			cin >> numero1; //adiciona valor a variavel 1
			cout << "Digite outro número: ";
            cin >> numero2; //adiciona valor a variavel 2

			switch (opcao) { // Verifica a opção escolhida
            case 1:
                cout << numero1 << " + " << numero2 << " = " << numero1 + numero2 << endl; //soma
                break;
            case 2:
				cout << numero1 << " - " << numero2 << " = " << numero1 - numero2 << endl; //subtração
                break;
            case 3:
				cout << numero1 << " * " << numero2 << " = " << numero1 * numero2 << endl; //multiplicação
                break;
            case 4:
                if (numero2 != 0) {
					cout << numero1 << " / " << numero2 << " = " << numero1 / numero2 << endl; //divisão
                }
                else {
					cout << "nao tem como dividir o numero por zero" << endl; //ve se numero 2 é zero
                }
                break;
            }
        } 
        else if (opcao == 0) { 
            cout << "Saindo da calculadora" << endl;
        }
        else {
            cout << "Opção inválida!" << endl;
        }

    } while (opcao != 0 );

    return 0;
}


// eu achei a linguagem com uma sitaxe simples, mas ainda estou aprendendo ,achei ela bem parecida com outras linguagens que ja usei demorei um pouco mais do esperado ja que nao sei se e uma linguagem que vcs usam no dia a dia ,
//entao fui atras de aprender um pouco mais sobre ela




