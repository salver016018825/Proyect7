#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    //                  [0]     [1]
    char list[2][10] = {"to",""};
    
    bool bandera = false;
	int sizeList = 0;
    int valor;
    cout<<"valor de i: "<<endl;
    cin>>valor;

    int index;
    for(int i = 0; i < 2; i++ )
    {
        sizeList = strlen(list[valor-1]);
		if(sizeList == 0){
			bandera = true;
			index = i;
			break;
		}
    }
	
    if(bandera ==  true)
    {
        cout<<"cadena esta vacia \tnumero de codigo: "<<valor;
    }else{
        cout<<"hay registro size: "<<sizeList;
    }

    
    return 0;
}


