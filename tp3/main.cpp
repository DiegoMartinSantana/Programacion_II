#include <iostream>

using namespace std;

class Empleado {
};
int main()
{

    int opcion;
    while (true){
    cout << "BIENVENIDO AL PROGRAMA " << endl;
    cout << endl;
    cout << "  1 - CARGAR EMPLEADOS" << endl;
    cout << endl;
    cout << "  2 - MOSTRAR EMPLEADOS" << endl;
    cout << endl;
    cout << " 0 - FINALIZAR PROGRAMA " << endl;
    cout << endl;
    cout << "INGRESE LA OPCION " << endl;
    cin >> opcion;

    switch(opcion){
        case 1 :
            //llamado funcion cargar empleados
          break;
        case 2 :
            //llamado mostrar
            break;

         case 0 :
             return 0 ; // no recuerdo como finalizar el programa aca jaj

         break;

         default :
             cout << "OPCION INCORRECTA " << endl;
            break;
    }
    }

}
