#pragma once //no se repita clases
#include<Vector.hpp>
#include<SerieNavidad.hpp>

class Lienzo
{
private:
    Vector posicion;
    Vector tamano;
public:
    Lienzo(Vector p, Vector t) {

        this->posicion = p;
        this->tamano = t;
    }
    ~Lienzo() {}

    void Dibujar(SerieNavidad serie){
        serie.Imprimir();
    }

    void Limpiar(){
        system("clear");
    }

};