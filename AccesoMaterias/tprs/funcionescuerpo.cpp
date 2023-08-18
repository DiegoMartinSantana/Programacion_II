
#include<iostream>
#include <cstring>

#include "funcionescabecera.h"

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
void ingresomaterias( char matingreso[][30]){
    int num;
    char nombre[30]{};
    for(int x=0;x<5;x++){
        cout << "INGRESE NUMERO DE LA MATERIA : ";
    cin >> num;
    cout << "INGRESE NOMBRE DE LA MATERIA ";
    cargarCadena(matingreso[num-1],29); //dejo uno para el /0

    }
}
    void vermaterias(char matingreso[][30]){
    for(int x=0;x<5;x++){

        cout << "NUMERO DE LA MATERIA" << x+1 <<endl;

        cout << "NOMBRE DE LA MATERIA " << &matingreso[x][0] << endl;
    }

}

void accesoalumnos(float *vhoras,int matemarzo[][31]){
int legajo,mes,nromat,dia;
float canth;


    cout << "Ingrese legajo "<< endl;
    cin >> legajo;
while(legajo!=0){
    cout << "ingrese dia"<< endl;
    cin >> dia;

    cout << "ingrese mes"<< endl;
    cin >> mes;
    cout << "Ingrese nromateria "<< endl;
    cin >> nromat;
    cout << "ingrese cantidad horas "<< endl;
    cin >>canth;

    vhoras[nromat-1]+=canth; // asigno cantidad horas a la materia .. sirve para punto a y b
    if(mes==3){
        matemarzo[nromat-1][dia-1]++;
    }
  cout << "Ingrese legajo "<< endl;
    cin >> legajo;

}

}

void sinaccesos(float *vhoras, char mat[][30]){

for(int x=0;x<5;x++){ // cambie a  5 para prueba

    if(vhoras[x]==0){

        cout << mat[x]<<endl; // muestra toda la fila :O
    }
}

}
void mascanthoras(float *vhoras, char mat[][30]){
float maximo=vhoras[0];
int maximorelav=0;
for(int x=0;x<20;x++){

    if(vhoras[x]>maximo){
        maximo=vhoras[x];
        maximorelav=x;
    }
}
cout << "LA MAXIMA MATERIA ES " << mat[maximorelav];
}


void matmarzo(int matemarzo[][31],char mat[][30]){

for(int x=0;x<5;x++){ //cambie a 5 para prueba.. sino 20 va!

        for(int y=0;y<31;y++){
        cout << "MATERIA  ----    " << mat[x] << "     DIA ----    " << y+1 << "cantidad accesos " << matemarzo[x][y]<<endl; // verificar si muesta el contenido

        }


}

}
