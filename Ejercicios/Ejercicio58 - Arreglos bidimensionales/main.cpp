#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv)
{
	string nombres[3][2];
	
	nombres[0][0] = "Juan";
	nombres[0][1] = "Perez";
	
	nombres[1][0] = "Maria";
	nombres[1][1] = "Martinez";
	
	nombres[2][0] = "Pedro";
	nombres[2][1] = "Jimenez";
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << nombres[i][j] << " ";
		}
		cout << endl;
	}

	
	return 0;
}
