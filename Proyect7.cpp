/*
    Los números de empleados van del 1 al 20, pero no se ingresan de forma consecutiva, el usuario lo ingresa aleatoriamente, por ejemplo: primero ingresa el número 5, después ingresa el número 2, etc.
*/

#include <iostream>

using namespace std;

int main()
{
    int cod[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    char nameEmployed[20][50] = {};

    int iInferior = 0, iSuperior = 0, iCentro = 0, clave = 0;
    char bandera = 'F';

    iInferior = 0;
    iSuperior = 19;

    cout<<"enter number employed: ";
    cin>>clave;

    while(iInferior <= iSuperior){
         
        iCentro = (iInferior + iSuperior) / 2;
         
        if(cod[iCentro] == clave){
            bandera = 'V';
            break;
        } else if(cod[iCentro] > clave){
            iSuperior = iCentro -1;
        } else {
            iInferior = iCentro +1;
        }    
    }
     
    if(bandera == 'V'){
        cout<<"the codigo  "<<clave<<" is the employed: "<<nameEmployed[iCentro];
    } else {
        cout<<"the empleoyed not exits";
    }

    
    return 0;
}
