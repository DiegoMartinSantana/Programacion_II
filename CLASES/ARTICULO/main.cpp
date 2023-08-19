#include <iostream>
#include <cstring>
#include <Articulo.h>
using namespace std;

void cargarCadena(char *palabra, int tamano){

    int i=0;

    fflush(stdin);

    for (i=0; i<tamano; i++){

        palabra[i]=cin.get();

        if (palabra[i]=='\n'){

            break;

        }

    }

    palabra[i]='\0';

    fflush(stdin);

}
void vecart ( Articulo *vec,int tam){
    char veccod[5]; //aca no seria de 6? por el \n
    char vecdesc[30];
    float precio;
    int stock;
    bool estado;
    int con=1;
    for(int x =0;x<tam;x++){
            cout << endl;
  cout << "********ARTICULO NRO " << con << " *************" << endl;
        cout << "Ingrese el Codigo " << endl;
        cargarCadena(veccod,5);
        vec[x].setcodigo(veccod);
        cout << "Ingrese la descripcion" << endl;
        cargarCadena(vecdesc,29);
        vec[x].setdescripcion(vecdesc);
        cout << "Ingrese el precio" << endl;
        cin >> precio;
        vec[x].setprecio(precio);
        cout << "Ingrese su stock" << endl;
        cin >> stock;
        vec[x].setstock(stock);
        cout << "Ingrese su estado 1 o 0" << endl;
        cin >> estado;
        vec[x].setestado(estado);
        cout << endl;
         cout << "******** PASEMOS AL SIGUIENTE ARTICULO *************"<< endl;
        con++;
        }

}
void mostrarvec( Articulo *vec,int tam){

    for(int x =0;x<tam;x++){

        cout << "CODIGO : " <<endl;
        cout << vec[x].getcodigo() << endl;
        cout << "DESCRIPCION : " <<endl;
        cout <<vec[x].getdescripcion()<< endl;
        cout << "PRECIO : " <<endl;
       cout << vec[x].getprecio()<< endl;
        cout << "STOCK : " <<endl;
        cout <<vec[x].getstock()<< endl;
            cout << "ESTADO : " <<endl;
       cout << vec[x].getestado()<< endl;
        cout  << endl;
        }

}
void mayoraval( float valor,Articulo *vec,int tam){

         for(int x =0;x<tam;x++){

        if(vec[x].getprecio()>valor){
            cout << vec[x].getdescripcion() << endl;
        }

        }

}
int poscodigo ( char *codigo,Articulo *vec,int tam){
    int pos;
    for(int x=0;x<tam;x++){

        if(vec[x].getcodigo()== codigo){ // comprobar si funca esto.
            pos =x+1;
            return pos;
        }

    }
 return -1;
}
Articulo devarticul ( char *codigo, Articulo*vec,int tam){

    for(int x=0;x<tam;x++){

        if(vec[x].getcodigo()== codigo){ // comprobar si funca esto.

            return vec[x];
        }

    }
    Articulo a;
 a.setstock(-1);
 return a;
}
int devartinf (int stock, Articulo *vec ,int tam){
    int con=0;
     for(int x =0;x<tam;x++){

        if(vec[x].getstock()<stock){
            con++;
        }

        }
  return con;
}

void modificarpre(int porcent , Articulo *vec,int tam){
    float precio=0.00;
    for(int x=0;x<tam;x++){

        precio= (vec[x].getprecio()*porcent)/100;
        precio+=vec[x].getprecio();
        vec[x].setprecio(precio);

     }
}

int main()
{



//Desarrollar un proyecto de CodeBlock con un menú que llame a cada una de las funciones.



    int tam =10;
  bool vali=true;
    int opcion;
    while (vali){
    cout << "BIENVENIDO AL PROGRAMA " << endl;
    cout << endl;
    cout << "  1 - CARGAR VECTOR " << endl;
    cout << endl;
    cout << "  2 - MOSTRAR VECTOR" << endl;
    cout << endl;
    cout << " 3 - BUSCAR ARTICULOS MAYORES A VALOR INGRESADO (0.00 FORMATO) " << endl;
    cout << endl;
    cout << " 4 - BUSCAR POSICION CON CODIGO " << endl;
    cout << endl;
    cout << " 5 - BUSCAR OBJETO X CODIGO" << endl;
    cout << endl;
    cout << " 6 - BUSCAR ARTICULOS MENORES A STOCK INGRESADO " << endl;
    cout << endl;
    cout << " 7 - INCREMENTAR PRECIO POR PORCENTAJE DE TODOS . " << endl;
    cout << endl;
    cout << " 0 - FIN DEL PROGRAMA " << endl;


    cin >> opcion;

    switch(opcion){
        case 1 :
            Articulo vec[10];
           vecart(vec,tam);
          break;
        case 2 :
            mostrarvec(vec,tam);
          break;
        case 3 :
            float valor;
            cout << "INGRESE VALOR " <<  endl;
            cin >> valor;

            mayoraval(valor,vec,tam);
            break;
        case 4 :
            char veccod4[5];

            cout << "INGRESE CODIGO  " << endl;
            cargarCadena(veccod4,5);
            poscodigo(veccod4,vec,tam);
            //llamado mostrar
            break;
        case 5 :

            char veccod5[5];

            cout << "INGRESE CODIGO  " << endl;
            cargarCadena(veccod5,5);
            devarticul(veccod5,vec,tam);

            break;

         case 6 :
             int stock;
             cout << "INGRESE STOCK " << endl;
             cin >>stock;

             devartinf(stock,vec,tam);
            break;

         case 7 :
             int porcentaje;
            cout << "INGRESE PORCENTAJE  " << endl;
            cin >> porcentaje;

            modificarpre(porcentaje,vec,tam);

        break;
         case 0 :

        vali=false;
        break;

         default :
             cout << "OPCION INCORRECTA " << endl;
            break;
    }
    }




    return 0;

}
