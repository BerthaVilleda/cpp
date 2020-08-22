#include <iostream>

using namespace std;

void menu() {
    bool salir = false;

    while(salir == false) {
        int opcion = 0;
        int ingresar_efectivo;
        int saldo_inicial = 20000;
        int retirar_efectivo = 0;
        int saldo = 0, imprimir;
        
        cout <<"Bienvenid@ al cajero automatico!" << endl;
		cout << "*******************************" << endl << endl;
		cout << "1.- Ingresar dinero a la cuenta" << endl;
		cout << "2.- Retirar dinero de la cuenta" << endl;
		cout << "3.- Consultar saldo actual" << endl;
		cout << "4.- Salir" << endl;

		cout << endl;
		cout << endl;				
		cout << "Ingrese la opcion a realizar: ";
		cin >> opcion;

        
		switch (opcion)
        {
        	
        case 1:
        	{
        	system("cls");
            cout << "Ingresar dinero a la cuenta: ";
            cin >> ingresar_efectivo;
            
            cout << endl; 
            
            saldo = saldo_inicial + ingresar_efectivo;
            
            cout << "Su cantidad total es L." << saldo;
            cout << endl;
            cout << endl;
            
            system("pause");
            break;
			}
		case 2:
			{
				
				system("cls");
				cout << "Cuanto desea retirar de su cuenta: ";
				cin >> retirar_efectivo;
				
				cout << endl;
				
				if(retirar_efectivo > saldo_inicial)
				{
					cout << "No tiene esa cantidad de efectivo en su cuenta";
					cout << endl;
					cout << endl;
					system("pause");
				}
				else
				{
					saldo = saldo_inicial - retirar_efectivo;
					cout << "Su saldo actual es de L." << saldo;
					cout << endl;
					cout << endl;
					
					cout << "Desea imprimir recibo?" << endl;
					cout << "1. SI  2. NO ";
					cin >> imprimir;
					
					if (imprimir == 1)
					{
					cout << "Por favor tome su recibo" << endl << endl;
					}
					
					else
					
					if (imprimir == 2)
					{
						system("cls");
						menu();
					}
					system("pause");
				}
				system("cls");
				break;	
			}
		case 3:
			{
				system("cls");
				cout << "Tiene L." << saldo_inicial << " en su cuenta" << endl << endl;
				system("pause");
				break;	
			}
		case 4:
			{
				salir = true;
				break;	
			}
			default:
				break;
        }
        system("cls");
    }
}



