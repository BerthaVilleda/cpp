#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int numeroSecreto = 7;

void adivinarNumeroSecreto(int miNumero)
{
	if (miNumero == numeroSecreto)
	{
		cout << "Adivinaste!" << endl;
	}
	else
	{
		cout << "Intento fallido con " << miNumero << endl;
		
		int otroNumero = 0;
		cout << "Ingrese otro numero:";
		cin >> otroNumero;
		adivinarNumeroSecreto(otroNumero);
	}
}


int main(int argc, char** argv)
{
	adivinarNumeroSecreto(5);

	return 0;
}
