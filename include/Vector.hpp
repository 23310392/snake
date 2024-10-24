#pragma once
class Vector
{
private:
    int x;
    int y;
public:
    Vector(){
        this->x = 0;
        this->y = 0;

    }
    Vector(int x, int y) {

        this->x = x;
        this->y = y;
    }
    ~Vector() {}

    int ObtenerX(){
        return this-> x;
    }

    int ObtenerY(){
        return this-> y;
    }
};