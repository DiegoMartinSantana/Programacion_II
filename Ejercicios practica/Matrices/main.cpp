#include <iostream>

using namespace std;

int ejer1(int mat[][10],int nro0a9){

    int maximo= mat[nro0a9][0];
    for(int x=0;x<10;x++) //fila
    {
          for(int y=0;y<10;y++) //columna
            {
               if( mat[nro0a9][y]> maximo){
                maximo=mat[nro0a9][y];
               }
            }
    }
    return maximo;
}
int ejer2(int mat[][10],int nro0a9){

    int maximo= mat[nro0a9][0];
    int pos=0;
    for(int x=0;x<10;x++) //fila
    {
          for(int y=0;y<10;y++) //columna
            {
               if( mat[nro0a9][y]> maximo){
                maximo=mat[nro0a9][y];
                pos=y;
               }
            }
    }
    return pos;
}
int ejer3(int mat[][10],int nro0a9){


        int acu=0;
    for(int x=0;x<10;x++) //fila
    {
          for(int y=0;y<10;y++) //columna
            {
                  if(x==nro0a9){
                    acu+=mat[x][y];
                  }
            }
    }
    return acu;
}
int ejer4(int mat[][10],int nro0a9){


        int acu=0;
    for(int x=0;x<10;x++) //fila
    {
          for(int y=0;y<10;y++) //columna
            {
                  if(x==nro0a9){
                    if(mat[x][y]>0){
                        acu+=mat[x][y];
                    }
                  }
            }
    }
    return acu;
}

int ejer5(int mat[][10],int nro0a9){


        int acu=0;
    for(int x=0;x<10;x++) //fila
    {
          for(int y=0;y<10;y++) //columna
            {

                        acu+=mat[x][y];

            }
    }
    return acu;
}

int main()
{

}
