#include "Articulo.h"
#include <cstring>


        void Articulo::setcodigo(char *codigo){
                strcpy(_codigo , codigo);
                }

        void Articulo::setdescripcion(char *descripcion){
                strcpy(_descripcion , descripcion);
                }

        void Articulo::setprecio(float precio){
             _precio=precio;
             }

        void Articulo::setstock(int stock){
            _stock = stock;
            }

        void Articulo::setestado(bool a){
        _estado=a;
        }

        char* Articulo::getcodigo(){ return _codigo;}

        char* Articulo::getdescripcion(){return _descripcion;}

        float Articulo::getprecio(){return _precio ;}

        int Articulo::getstock(){return _stock;}

        bool Articulo::getestado(){return _estado;}

