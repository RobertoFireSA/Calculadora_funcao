#include <iostream>
#include "pch.h"
using namespace std;

void menu();
float sum(float a, float b);
float sub(float a, float b);
float mult(float a, float b);
float divis(float a, float b);

int main()
{
    menu();
    return 0;
}

void menu()
{
    int op;
    float a, b;
    do {
        cout << "0. Sair\n";
        cout << "1. Somar\n";
        cout << "2. Subtrair\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cin >> op;

        if (op) {
            cout << "\nPrimeiro numero: ";
            cin >> a;

            cout << "Segundo numero: ";
            cin >> b;

            switch (op) {
            case 1:
                cout << "Soma: " << sum(a, b) << endl;
                break;
            case 2:
                cout << "Diferença: " << sub(a, b) << endl;
                break;
            case 3:
                cout << "Produto: " << mult(a, b) << endl;
                break;
            case 4:
                if (b)
                    cout << "Divisão: " << divis(a, b) << endl;
                else
                    divis(a, b);
                break;
            default:
                cout << "Opção inválida\n";
            }
        }
        else
            cout << "Saindo...\n";
        cout << endl;
    } while (op);
}

float sum(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float mult(float a, float b)
{
    return a * b;
}

float divis(float a, float b)
{
    if (b != 0)
        return a / b;
    else
        cout << "Não pode dividir por 0\n";
}