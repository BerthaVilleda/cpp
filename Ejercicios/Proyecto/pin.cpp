#include <iostream>

using namespace std;

bool acceder() {
    string pin = "";
    int intentos = 0;

    while (intentos <= 3) {
        system("cls");

        cout << "CAJERO AUTOMATIVO" << endl;
        cout << "*****************" << endl;
        cout << endl;
        
	
        if (intentos == 3) {
            cout << "Se bloqueara su tarjeta por motivos de seguridad" << endl;

            return false;
        }

        cout << "Ingrese su PIN: ";
        cin >> pin;

        if (pin == "2256") {
            system("cls");
            return true;
        }

        intentos++;
    }
     
    return false;
}
