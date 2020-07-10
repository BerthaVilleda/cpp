#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int a=50;
	int b=10;
	int c=7;
	
	if (a > b && a > c)
	{
	    cout << "a es el mayor:" << a;
	}
	if (b > a && b > c)
	{
		cout << "b es el mayor:" << b;
	}
	if (c > a && c > b)
	{
		cout << "c es el mayor:" << c;
	}	
	return 0;
}
