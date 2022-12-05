#include <iostream>
#include "Def_Calc.h"


void Principal() 
{
	float Num1{ 0 }, Num2{ 0 }; 
	int Ini{ 0 };




	Inicio();
	std::cin >> Ini;


	system("cls");

	switch (Ini)

	{

	case 1:
		std::cout << "SOMAR";
		Primeiro();
		std::cin >> Num1;
		Segundo();
		std::cin >> Num2;
		std::cout << Soma(Num1, Num2) << "\n";
		break;

	case 2:
		std::cout << "SUBTRAIR";
		Primeiro();
		std::cin >> Num1;
		Segundo();
		std::cin >> Num2;
		std::cout << Sub(Num1, Num2) << "\n";
		break;

	case 3:
		std::cout << "MULTIPLICAR";
		Primeiro();
		std::cin >> Num1;
		Segundo();
		std::cin >> Num2;
		std::cout << Mult(Num1, Num2) << "\n";
		break;

	case 4:
		std::cout << "DIVISAO";
		Primeiro();
		std::cin >> Num1;
		Segundo();
		std::cin >> Num2;
		std::cout << Div(Num1, Num2) << "\n";
		std::cout << Resto(Num1, Num2) << "\n";
		break;

	default:
		std::cout << "Opcao Invalida !\n";
	}

}




// funçoes de calculos e menu principal.

float Soma(float a, float b)
{
	return a + b;
}

float Sub(float a, float b)
{
	return a - b;
}

float Mult(float a, float b)
{
	return a * b;
}

int Div(int a, int b)
{
	if (b != 0)
		return a / b;
	else
		std::cout << "Nao pode Dividir por 0\n";
}
int Resto(int a, int b)
{
	return a % b;
}
void Primeiro()
{
	std::cout << "\nDigite o Primeiro valor: ";
}
void Segundo()
{
	std::cout << "\nDigite o Segundo Valor: ";
}

// Menu principal 
void Inicio()
{

	std::cout << "Calculadora Basica com Funçoes\n";
	std::cout << "1 : Somar !\n";
	std::cout << "2 : Subtrair\n";
	std::cout << "3 : Multiplicar\n";
	std::cout << "4 : Dividir\n";


}