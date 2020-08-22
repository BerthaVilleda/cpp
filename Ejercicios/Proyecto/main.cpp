#include <iostream>
#include "pin.h"
#include "menu.h"

using namespace std;

int main(int argc, char const *argv[])
{
    bool respuesta = acceder();

    if (respuesta == true)
	{
        menu();
    }
    
    return 0;
}
