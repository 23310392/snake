
#include<SerieNavidad.hpp>
#include<Lienzo.hpp>
#include<Vector.hpp>
#include<unistd.h>//para comunicación con el sistema (En windows WINH )

int main(int argc, char const *argv[])
{
    Vector p(0,5);
    Vector t(100,100);



    Lienzo lienzo(p,t);
    SerieNavidad serie(30);
    SerieNavidad serie2(30);


    bool estado= true;
    int incremento= 0;
    while(true){

        //celula que explota
        serie.Alternar(estado);
        lienzo.Dibujar(serie);
        estado = estado ? false : true;

        //incremento
        serie2.Apagar();
        serie2.Encender(incremento);
        lienzo.Dibujar(serie2);
        incremento++;



        sleep(1);
        lienzo.Limpiar();
    }


    return 0;
}
