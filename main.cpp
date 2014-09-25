#include <iostream>
using std::cout;

#include "SmartPhone.h"

int main(int argc, char **argv)
{
	cout << "Implementando a classe SmartPhone" << "\n\n";
	
	SmartPhone sp1;
	
	SmartPhone::mostrarInfo();
	
	cout << "\n\n";
	
	sp1.updateHistory("Facebook");
	sp1.updateHistory("Google");
	sp1.updateHistory("ufpa.br");
	
	sp1.listHistory();
	
	return 0;
}
