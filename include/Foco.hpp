#pragma once
#include <iostream>
using namespace std;
class Foco
{
private:
    bool encendido;
    
public:
    Foco() {}
    ~Foco() {}
    void Encender(){
        this->encendido=true;
    }
    void Apagar(){
        this->encendido=false;
    }
    void Imprimir(){

        if(this->encendido){
            cout<<"o";
        }else{
            cout<<".";
        }


    }
};