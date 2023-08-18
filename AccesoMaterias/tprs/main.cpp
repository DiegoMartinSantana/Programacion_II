#include <iostream>
#include <cstring>
#include "funcionescabecera.h"

using namespace std;

int main()
{

  int opcion=0;
    float vhoras[20]{};
    char matingreso[20][30]; //tipo char no ininicializar en 0..
    int matemarzo[20][31]{};
    while(true){

   //tipo char no ininicializar en 0..
    cout << "*******************MENU**************"<<endl;
    cout<< "1-INGRESAR MATERIAS (NUMERO Y NOMBRE)"<<endl;
    cout<< "2-VER MATERIAS"<<endl;
    cout<< "3-INGRESAR ACCESOS ALUMNOS"<<endl;
    cout<< "4- MATERIAS SIN ACCESOS"<<endl;
    cout<< "5-MATERIA CON MAS HORAS DE ACCESO"<<endl;
    cout<< "6-CANTIDAD ACCESOS MATERIAS EN MARZO"<<endl;
    cout<< "0-SALIR DEL PROGRAMA"<<endl;
    cin >> opcion;
     switch(opcion){
        case 1 : ingresomaterias(matingreso);
        break;
         case 2 : vermaterias(matingreso);
        break;
         case 3 : accesoalumnos(vhoras,matemarzo);
        break;
         case 4 : sinaccesos(vhoras,matingreso);
        break;
         case 5 : mascanthoras(vhoras,matingreso);
        break;
         case 6 :  matmarzo(matemarzo,matingreso);
        break;
         case 0 :
             return 0 ;
        break;
         default:
            cout << "opcion no valida" << endl;
            break;
            system("cls");
     }

     }

    return 0;
}
