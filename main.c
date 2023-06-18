
#include <iostream>
#include <iomanip>
#include <cmath>
#include <bitset>

using namespace std;

// Função para realizar a adição
double adicao(double num1, double num2) {
  return num1 + num2;
}

// Função para realizar a subtração
double subtracao(double num1, double num2) {
  return num1 - num2;
}

// Função para realizar a multiplicação
double multiplicacao(double num1, double num2) {
  return num1 * num2;
}

// Função para realizar a divisão
double divisao(double num1, double num2) {
  return num1 / num2;
}

// Função principal
int main() {
  int opcao;
  double numero1, numero2, resultado;

  cout << "Selecione o modo da calculadora:\n";
  cout << "1. Modo basico (adicao, subtracao, multiplicacao e divisao)\n";
  cout << "2. Modo programador (operacoes binarias, decimais e hexadecimais)\n";
  cout << "Opcao: ";
  cin >> opcao;

  if (opcao == 1) {
    // Modo básico
    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;

    cout << "Selecione a operacao:\n";
    cout << "1. Adicao\n";
    cout << "2. Subtracao\n";
    cout << "3. Multiplicacao\n";
    cout << "4. Divisao\n";
    cout << "Opcao: ";
    cin >> opcao;

    switch (opcao) {
      case 1:
        resultado = adicao(numero1, numero2);
        cout << "Resultado: " << resultado << endl;
        break;
      case 2:
        resultado = subtracao(numero1, numero2);
        cout << "Resultado: " << resultado << endl;
        break;
    }
  } else if (opcao == 2) {
    // Modo programador
    cout << "Selecione a operacao:\n";
    cout << "1. Conversao de decimal para binario\n";
    cout << "2. Conversao de decimal para hexadecimal\n";
    cout << "Opcao: ";
    cin >> opcao;

    if (opcao == 1) {
      // Conversão de decimal para binário
      cout << "Digite o numero decimal: ";
      cin >> numero1;
      cout << "Resultado em binario: " << bitset<8>(static_cast<int>(numero1)) << endl;
    } else if (opcao == 2) {
      // Conversão de decimal para hexadecimal
      cout << "Digite o numero decimal: ";
      cin >> numero1;
      cout << "Resultado em hexadecimal: " << hex << static_cast<int>(numero1) << endl;
    } else {
      cout << "Opcao invalida!" << endl;
    }
  } else {
    cout << "Opção invalida!" << endl;
  }

  return 0;
}
