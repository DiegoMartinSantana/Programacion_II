#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

///PROTOTIPOS
void cargarMaterias(char mat[][35]);
void mostrarMaterias(char mat[][35]);
void cargarAccesos(float *horas, int accesos[][31]);
void puntoA(float *horas, char mat[][35]);
void puntoB(float *horas, char mat[][35]);
void puntoC(int accesos[][31],char materias[][35]);

///


void cargarMaterias(char mat[][35]){
    int i, nMat;
    for(i=0;i<5;i++){
        cout<<"INGRESE EL NUMERO DE LA MATERIA ";
        cin>>nMat;
        cout<<"INGRESE EL NOMBRE DE LA MATERIA ";
        cargarCadena(mat[nMat-1],34);
    }
}

void mostrarMaterias(char mat[][35]){
    int i;
    for(i=0;i<5;i++){
        cout<<"NUMERO DE LA MATERIA "<<i+1<<endl;
        cout<<"NOMBRE DE LA MATERIA "<<&mat[i][0]<<endl;
    }
}

            ///mat[i]=&mat[i][0]

void cargarAccesos(float *horas, int accesos[][31]){
    int legajo, dia, mes, materia;
    float cantHoras;
    cout<<"LEGAJO ";
    cin>>legajo;
    while(legajo!=0){
        cout<<"DIA ";
        cin>>dia;
        cout<<"MES ";
        cin>>mes;
        cout<<"MATERIA ";
        cin>>materia;
        cout<<"HORAS ";
        cin>>cantHoras;
        horas[materia-1]+=cantHoras;/// para el a y b
        if(mes==3) accesos[materia-1][dia-1]++;

        cout<<"LEGAJO ";
        cin>>legajo;
    }
}

void puntoA(float *horas, char mat[][35]){
    int i;
    for(i=0;i<5;i++){
        if(horas[i]==0){
            cout<<mat[i]<<endl;
        }
    }
}

void puntoB(float *horas, char mat[][35]){

}

void puntoC(int accesos[][31],char materias[][35]){
}







#endif // FUNCIONES_H_INCLUDED
