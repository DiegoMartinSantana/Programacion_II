#include <iostream>

using namespace std;
//Funciones aca

int ejer1(int vec[],int tamvec){
    int valormin=vec[0];
    for(int x=0;x<tamvec;x++){
        if(vec[x]<valormin){
            valormin=vec[x];
        }
    }
    return valormin;
}

//ejer2 lo mismopero con >

int ejer3(int vec[],int tamvec){
    int valormin=vec[0];
    int posmin=0;
    for(int x=0;x<tamvec;x++){
        if(vec[x]<valormin){
            valormin=vec[x];
            posmin=x;
        }
    }
    return posmin;
}
//ejer 4 lo mismo pero  max


bool ejer5(int vec[10],int num){
    bool a=false;

    for(int x=0;x<10;x++){
        if(vec[x]==num){
            a=true;
        }
    }
    if(a){
        return true;
    }else{
    return false;}
}

int ejer6(int vec[10],int num){
    bool a=false;
    int pos;
    for(int x=0;x<10;x++){
        if(vec[x]==num&& a==false){
            pos=x;
            a=true;
        }
    }
    if(a){
        return pos;
    }else{
        pos=-1;
    return pos;
    }
}


int ejer7(int vec[10],int num){

    int con=0;
    for(int x=0;x<10;x++){
        if(vec[x]==num){
            con++;
        }
    }
    return con;
}


int main()
{




    return 0;
}
