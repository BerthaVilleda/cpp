#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv)
{
	int numeros[5];
	
	for (int i = 0; i < 5; i++)
	{
		numeros[i] = i;
	}
	
	for (int i = 0; i < 5; i++)
	{
		cout << numeros[i] << endl;
	}

	
	return 0;
}
