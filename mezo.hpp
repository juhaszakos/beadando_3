#ifndef MEZO_HPP
#define MEZO_HPP
#include "widgets.hpp"
using namespace genv;
class Mezo : public Widget
{
    protected:
        bool kattintva;
        int allapot;

    public:
        Mezo(int x, int y, int sx, int sy);
        void draw();
        void handle(int jatekos);
        void setKattintva();
        bool getKattintva();




};

#endif // MEZO_HPP
