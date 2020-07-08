#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int numerosecreto = 7;
	int numero = 0;
	
	cout << "ingrese un numero:";
	cin >> numero;
	
	cout << endl;
	
	if (numero == numerosecreto){
		cout << "Adivinaste el numero secreto: "<< numero;
	} else{
		cout << "No adivinaste";
	}
	
	return 0;
}
