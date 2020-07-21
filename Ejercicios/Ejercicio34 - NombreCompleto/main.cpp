#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

string nombrecompleto(string nombre, string apellido) 
{
	return nombre + " " + apellido;
}

int main(int argc, char** argv) {
	
	string primernombre = "";
	string primerapellido = "";
	
	cout << "Ingrese su primer nombre:";
	cin >> primernombre;
		cout << "Ingrese su primer apellido:";
	cin >> primerapellido;
	
	cout << endl;
	
	cout << "Nombre completo:" << nombrecompleto(primernombre, primerapellido);
	
	
	return 0;
}
