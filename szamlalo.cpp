#include "szamlalo.hpp"
#include "graphics.hpp"
#include <string>

using namespace std;

szamlalo::szamlalo(int x, int y, int sx, int sy, int mini, int maxi):Widget(x,y,sx,sy)
{
    minimum=mini;
    maximum=maxi;
}

void szamlalo::draw()
{
    genv::gout<<genv::color(100,100,100)<<genv::move_to(_x,_y)<<genv::box(_size_x,_size_y);
    genv::gout<<genv::color(0,0,0)<<genv::move_to(_x+(_size_x/4),_y+(_size_y/2))<<genv::text(string_szam);
    genv::gout<<genv::color(255,255,255)<<genv::move_to(_x+_size_x-10,(_y+_size_y/2)-5)<<genv::text('^');
    genv::gout<<genv::color(255,255,255)<<genv::move_to(_x+_size_x-10,(_y+_size_y/2)+15)<<genv::text('v');
    genv::gout<<genv::color(50,50,50)<<genv::move_to(_x+_size_x-11,_y)<<genv::line(0,_size_y);
    genv::gout<<genv::color(50,50,50)<<genv::move_to(_x+_size_x,_y+(_size_y/2))<<genv::line(-11,0);
}

void szamlalo::handle(genv::event ev,int eger_x,int eger_y)
{

    if(ev.type==ev_mouse)
    {


        if(eger_x>_x+_size_x-10 && eger_x<_x+_size_x && eger_y>_y && eger_y<_y+(_size_y/2) && ev.button==btn_left)
        {
            szam++;
        }
        if(eger_x>_x+_size_x-10 && eger_x<_x+_size_x && eger_y>_y+(_size_y/2) && eger_y<_y+_size_y && ev.button==btn_left)
        {
            szam--;
        }
    }
    if(ev.type==ev_key)
    {
        if(ev.keycode==key_up)
        {
            szam++;
        }
        if(ev.keycode==key_down)
        {
            szam--;
        }
       if(ev.keycode==key_pgup)
        {
            szam+=10;
        }
        if(ev.keycode==key_pgdn)
        {
            szam-=10;
        }
    }
    if(szam<=minimum)
    {
        szam=minimum;
    }
    if (szam>=maximum)
    {
        szam=maximum;
    }
    string_szam=to_string(szam);
}
string szamlalo::GetValasztva()
{
    return to_string(szam);
}
