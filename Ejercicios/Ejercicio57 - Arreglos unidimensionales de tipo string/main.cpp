#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv)
{
	int numeros[] = {4, 5, 8};
	
	for(int i = 0; i < 3; i++)
	{
		cout << numeros[i] << endl;
	}
	
	string nombres[] = {"Juan", "Maria", "Pedro", "Jose", "Pablo"};
	
	for(int i = 0; i < 5; i++)
	{
		cout << nombres[i] << endl;
	}
	return 0;
}
