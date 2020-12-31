/*
    Los números de empleados van del 1 al 20, pero no se ingresan de forma consecutiva, el usuario lo ingresa aleatoriamente, por ejemplo:
    primero ingresa el número 5, después ingresa el número 2, etc.
    Una vez que los datos estén guardados el usuario desea tener las siguientes funciones:

>> Buscar el nombre de un empleado por su número de empleado.

>> Buscar el número de empleado por su nombre.

>> Saber si un usuario no existe.

>> Saber si hay nombres similares entre sus empleados.

>> Mostrar empleados de forma ascendente por número de empleado.

>> Mostrar empleados de forma descendente por número de empleado.

Crea un programa en C++ que de solución a este problema. Solo utiliza lo aprendido en los módulos anteriores.
*/

#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int main()
{
    char nameEmployed[20][50] = { "","","","","","","","","","","","","","","","","","","","" };
    int cod[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

    int iInferior = 0, iSuperior = 0, iCentro = 0, clave = 0;
    char bandera = 'F';

    iInferior = 0;
    iSuperior = 20;

    int sizeName = 0;
    bool isnull = false;
    int option = 0;
    int code = 0;

    do {
        cout << "\n1. add employed" << endl;
        cout << "2. search employed with code" << endl;
        cout << "3. search employed with name" << endl;
        cout << "4. user exits" << endl;
        cout << "5. name similar" << endl;
        cout << "6. list ascend employed" << endl;
        cout << "7. list descent employed" << endl;
        cout << "8. exit" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "add\ncod of employed" << endl;
            cin >> code;
            int index;
            for (int i = 0; i < 20 && isnull != true; i++)
            {
                sizeName = strlen(nameEmployed[code - 1]);
                if (sizeName == 0)
                {
                    isnull = true;
                    index = i;
                    break;
                }                
            }
            if (isnull)
            {
                cout << "enter name:" << endl;
                cin >> nameEmployed[code - 1];
                cout << "code: " << code << "\nname: " << nameEmployed[code - 1] << endl;
                code = 0;
                isnull = false;
            }
            else
            {
                cout << "code is has not name employed" << endl;
            }
            option = 0;
            break;
        case 2:
            for (int i = 0; i < 20; i++)
            {
                cout << "code: " << (i + 1) << " name: " << nameEmployed[i] << endl;
            }

            break;
        }
    } while (option != 8 && option != 8);

    return 0;
}
