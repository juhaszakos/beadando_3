#ifndef SZAMLALO_HPP
#define SZAMLALO_HPP
#include "graphics.hpp"
#include "widgets.hpp"

using namespace genv;
using namespace std;

class szamlalo: public Widget
{
    protected:
        int szam=0;
        int minimum,maximum;
        string string_szam="0";

    public:
        szamlalo(int x, int y, int sx, int sy,int mini, int maxi);
        void draw();
        void handle(genv::event,int eger_x, int eger_y);
        string GetValasztva();




};

#endif
