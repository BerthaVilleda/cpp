#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int opcion = 0;
	
	while (true)
	{
		system("cls");
		
		cout << "****";
		cout << "MENU";
		cout << "****";
		
		cout << endl;
		cout << endl;
		
		cout << "1 - Bebidas Calientes" << endl;
		cout << "2 - Bebidas Heladas" << endl;
		cout << "3 - Reposteria" << endl;
		cout << "0 - salir" << endl;
		
		cout << endl;
		cout << "Ingrese una opcion entre 1 - 3:";
		cin >> opcion;
		
		if (opcion == 0)
		{
			break;	
		}
		
		if (opcion == 1)
		{
			system ("cls");
			cout << "***************" << endl;
			cout << "BEBIDAS CALIENTES" << endl;
			cout << "***************" << endl;
			system ("pause");
		}
		
			if (opcion == 2)
		{
			system ("cls");
			cout << "***************" << endl;
			cout << "BEBIDAS HELADAS" << endl;
			cout << "***************" << endl;
			system ("pause");
		}
		
			if (opcion == 3)
		{
			system ("cls");
			cout << "**********" << endl;
			cout << "REPOSTERIA" << endl;
			cout << "**********" << endl;
			system ("pause");
		}
		
		if (opcion < 0 || opcion > 3)
		{
			system ("cls");
			cout << "Ingrese una opcion valida" << endl;
			system ("pause");
		}	
	}
	
	return 0;
}
