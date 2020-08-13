#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv)
{
	int filas = 4;
	int columnas = 2;
	
	string nombres[filas][columnas] =
	{
		{"Juan", "Perez"},
		{"Maria", "Martinez"},
		{"Pedro", "Jimenez"},
		{"Pablo", "Hernandez"}
	};
	
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			cout << nombres[i][j] << " ";
		}
		cout << endl;
	}

	
	return 0;
}
