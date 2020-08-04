#include <iostream>
#include <stdlib.h> 
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv)
{
	int numeroSecreto = 0;
	int miNumero = 0;
	
	srand(time(NULL));
	
	numeroSecreto = rand() % 10 + 1;
	
	do
	{
		cout << "Adivina el numero (1 a 10):";
		cin >> miNumero;
		
		if (numeroSecreto < miNumero)
		{
			cout << "El numero secreto es menor" << endl;
		}
		else
		{
			if (numeroSecreto > miNumero)
			{
				cout << "El numero secreto es mayor" << endl;
			}
		}
		
	} while(numeroSecreto != miNumero);
	
	cout << endl;
	cout << "Adivinaste!";
	
	return 0;
}
