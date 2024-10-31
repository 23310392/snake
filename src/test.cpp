#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;
int g;
int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
    auto can = Canvas(300,200);
    can.DrawPointCircle(170,40,28);
    can.DrawPointCircle(35,40,10);

    while (true)
    {
        auto can = Canvas(200,200);
        can.DrawPointCircle(170,40,28);
        can.DrawPointCircle(frame,40,10);
        if(frame==140){
            can.DrawBlockCircleFilled(120,40,g++);
        }
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element personaje = spinner(21, frame);
        Element lienzo = bgcolor(Color::Blue, border(vbox(canvas(&can))));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.05s);
        frame++;
    }

    return 0;
}