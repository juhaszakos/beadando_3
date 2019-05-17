#include "mezo.hpp"

Mezo::Mezo(int x, int y, int sx, int sy):Widget(x,y,sx,sy)
{
   kattintva=false;
    allapot=0;
}
void Mezo::draw()
{
    if(allapot==-1)
    {
        gout<<color(255,0,0);
    }
    if(allapot==1)
    {
        gout<<color(0,0,255);
    }
    if(allapot==0)
    {
        gout<<color(50,50,50);
    }
    gout<<move_to(_x,_y)<<box(_size_x,_size_y);

}


void Mezo:: handle(int jatekos)
{
    allapot=jatekos;
    setKattintva();
}
void Mezo::setKattintva()
{
    kattintva=true;
}
bool Mezo::getKattintva()
{
    return kattintva;
}
