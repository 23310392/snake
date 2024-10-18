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
};