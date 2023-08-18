#include <iostream>

using namespace std;

int main()
{

/* EJER 1
    int nroart,nrosuc;
    float canv;

    float mat[5][3]{};

    cin >> nroart;
    cin >> nrosuc;
    cin >>canv;

   while(nroart!=0){

   mat[nroart-1][nrosuc-1]+=canv;


    cin >> nroart;
    cin >> nrosuc;
    cin >>canv;


   }
//punto b
float maximo= mat[0][0];
int artmax=1;
    for(int x=0;x<5;x++){
        for(int y=0;y<3;y++){
            if(mat[x][y]>maximo){
                maximo=mat[x][y];
                artmax=x+1;
            }
        }
    }

//punto a

for(int x=0;x<5;x++){
        for(int y=0;y<3;y++){
            cout << "               Sucursal " << y+1 <<endl;
        cout << "Articulo " << x+1 << mat[x][y]<<endl;


            }
        }

EJER 2

int mes,dia;
float importe;

float mat[31][12]{};
cin >> mes;
cin >> dia;
cin >>importe;


while(mes!=0){


    mat[dia][mes]+= importe;

cin >> mes;
cin >> dia;
cin >>importe;

}
int vecmayordiaxmes[12]{};
float montos[12]{};
int vecxmes[12]{};
for(int x=0;x<31;x++){
        for(int y=0;y<12;y++){

            vecxmes[y]+=mat[x][y];
            if(vecmayordiaxmes[y]==0 || mat[x][y] > vecmayordiaxmes){
                vecmayordiaxmes[y]= x+1;
                montos[y]= mat[x][y];
            }
            }
        }

EJER 3

int dia,mes;
float importe;
char codv;
char codigov[5];
codigov[0]= 'a';
codigov[1]= 'b';
codigov[2]= 'c';
codigov[3]= 'd';
codigov[4]= 'e';

float montoxven[5];
cin >> mes;
cin >> dia;
cin >>importe;
cin >> codv;
while(dia!=0){


for(int x=0;x<5;x++){

    if(codv== codigov[x]){
        montoxven[x]+=importe;

    }
}

cin >> mes;
cin >> dia;
cin >>importe;
cin >> codv;
}
//mostrar vectores..

EJER 4 */

int tipoeng,nromaq,cantpro,dia;
int mat[70][15]{};
cin >> tipoeng;
cin>>nromaq;
cin >> cantpro;
cin >>dia;
int vec[15]{};
while(dia!=32){

   mat[tipoeng-1][nromaq-1]=cantpro;
  vec[nromaq-1]+=cantpro;

cin >> tipoeng;
cin>>nromaq;
cin >> cantpro;
cin >>dia;

}
int mayorprod=mat[0][0];
int tipomay=1;
int menorprod=vec[0];
int maqmenorprod=1;
for(int x=0;x<70;x++){
        for(int y=0;y<15;y++){

                if(mat[x][y]>mayorprod){
                    mayorprod=mat[x][y]; //punto a
                    tipomay=x+1;
                    vec[y]<menorprod){

                    menorprod=vec[y]; // punto b
                    maqmenorprod=y+1;
                    } // punto c es solo un listado.. muestro x , muestro y  y muestro contenido..
                }
            }
        }








    return 0;
}
