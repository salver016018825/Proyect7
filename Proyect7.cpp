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
    char nameEmployed[20][50] = {"","","","","","","","","","","","","","","","","","","",""};
    int cod[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};    
    int iInferior = 0, iSuperior = 0, iCentro = 0, clave = 0;
    char bandera = 'F';
    iInferior = 0;
    iSuperior = 20;
    int sizeName = 0;
    bool isnull = false;
    int option = 0;
    int code = 0;
    int result = 1,position;
    bool exist = false;
    char name[30];
    int length = 0;
    int repeatname = 0;
    int equals = 0;
    do{
        cout<<"\n1. add employed"<<endl;
        cout<<"2. search employed with code"<<endl;
        cout<<"3. search employed with name"<<endl;
        cout<<"4. user exits"<<endl;
        cout<<"5. name similar"<<endl;
        cout<<"6. list ascend employed"<<endl;
        cout<<"7. list descent employed"<<endl;
        cout<<"8. exit"<<endl;
        cin>>option;
        switch (option)
        {
            case 1:
                //add employed
                cout<<"add\ncod of employed"<<endl;
                cin>>code;
                int index;
                for (int i = 0; i < 20; i++)
                {
                    sizeName = strlen(nameEmployed[code-1]);
                    if (sizeName == 0)
                    {
                        isnull = true;
                        index = i;
                        break;
                    }                    
                }
                if (isnull)
                {
                    cout<<"enter name:"<<endl;
                    cin>>nameEmployed[code-1];
                    cout<<"add succesfull " << endl;    
                    code = 0;
                    isnull = false;
                }else
                {
                    cout<<"code is has not name employed"<<endl;
                }           
                option = 0;
                
            break;
            case 2:
                //Buscar el nombre de un empleado por su número de empleado.
            cout << "enter code: ";
            cin >> code;
            while (iInferior <= iSuperior)
            {
                iCentro = (iInferior + iSuperior) / 2;
                if (cod[iCentro] == code)
                {
                    bandera = 'v';
                    length = strlen(nameEmployed[iCentro]);
                    break;
                }
                else if (cod[iCentro] > code)
                {
                    iSuperior = iCentro - 1;
                }
                else
                {
                    iInferior = iCentro + 1;
                }
            }
            if (bandera == 'v')
            {
                if (length != 0)
                {
                    cout << "code " << iCentro + 1 << "\nname: " << nameEmployed[iCentro] << endl;
                    length = 0;                    
                }
                else
                {
                    cout << "code: " << code << " ______ " << endl;                    
                }
            }
            else
            {
                cout << "code is not exits try again.." << endl;
            }      
            break;
            case 3:            
                //Buscar el número de empleado por su nombre.    
                cout << "enter name: ";
                cin>>name;            
                for (int i = 0; i < 20 && false != true; i++)
                {
                    result = strcmp(name, nameEmployed[i]);
                    if ( result == 0)
                    {
                        exist = true;
                        position = i;
                    }                
                }
                if (exist)
                {
                    cout << "code: " << position+1 << " \nname:  " << nameEmployed[position] << endl;
                    exist =  false;                    
                }
                else
                {
                    cout << "no exist name" << endl;
                }
                break;            
            break;
            case 4:
                //Saber si un usuario no existe.
                cout<<"enter username " << endl;
                cin>>name;
                for (int i = 0; i < 20 && false != true; i++)
                {
                    result = strcmp(name, nameEmployed[i]);
                    if ( result == 0)
                    {
                        exist = true;
                        position = i;
                    }                
                }
                if (exist)
                {
                    cout << "exist name"<< endl;
                    exist =  false;
                    
                }
                else
                {
                    cout << "no exist user" << endl;
                }
            break;
            case 5: 
                //Saber si hay nombres similares entre sus empleados.
                cout << "enter name" << endl;
                cin >> name;
                for (int i = 0; i < 20; i++)
                {   
                    equals = strcmp(name,nameEmployed[i]);
                    if (equals == 0)
                    {
                        repeatname++;
                        exist = true;
                    }                    
                }
                if (true)
                {
                    cout << "coincidences: " << repeatname;
                }else
                {
                    cout << "not matches" << endl;
                }
            break; 
            case 6:
                //Mostrar empleados de forma ascendente por número de empleado.
                for (int i = 0; i < 20; i++)
                {
                    cout << "code " << i + 1 << " " << nameEmployed[i] << endl;
                }              
            break;
            case 7:
                for (int i = 20; i > 0; i--)
                {
                    cout << "code " << i << " " << nameEmployed[i] << endl;
                }
            break;
        }
    }while(option !=8 && option != 8);  
    return 0;
}
