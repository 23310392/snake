#include<Foco.hpp>
#include<iostream>


int main(int argc, char const *argv[])
{
    Foco foco1;
    Foco foco2;

    std::cout<<"Encendiendo Foco"<<std::endl;
    
    foco1.Encender();
    std::cout<<"Apagando Foco"<<std::endl;
    foco1.Apagar();

    return 0;
}
