#include <iostream>
#include <cstdlib>
#include "Def_Calc.h"


int main() 
{
	char Rep;
	do {

		Principal();
		std::cout << "Digite s para continuar ou n Para sair: ";
		std::cin >> Rep;
		
		system("cls");
	} while (Rep == 's' );
		
}