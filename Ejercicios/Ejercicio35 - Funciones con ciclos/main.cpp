#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void imprimircaracteres(char caracter, int ciclos)
{
	for(int i = 0; i < ciclos; i++)
	{
		cout << caracter;
	}
	
	cout << endl;
}

int main(int argc, char** argv) {
	
	imprimircaracteres('@', 10);
	imprimircaracteres('#', 5);
	cout << "Hola Mundo" << endl;
	imprimircaracteres('@', 1000);
	
	return 0;
}
