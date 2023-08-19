#include <cstring>

class Articulo
{
    public:

        //metodos
        void cargar();
        void mostrar();

        //gets y set
        void setcodigo(char *codigo);
        void setdescripcion(char *descripcion);
        void setprecio(float precio);
        void setstock(int stock);
        void setestado(bool a);
        char *getcodigo();
        char *getdescripcion();
        float getprecio();
        int getstock();
        bool getestado();


    //protected:

    private:


        char _codigo[5];
        char _descripcion[30];
        float _precio;
        int _stock;
        bool _estado;


};


