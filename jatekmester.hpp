#ifndef JATEKMESTER_HPP
#define JATEKMESTER_HPP
#include "mezo.hpp"
#include "graphics.hpp"
#include "widgets.hpp"
#include "motor.hpp"
#include <vector>
using namespace std;
using namespace genv;
class Jatekmester
{   protected:
    vector<Widget*> m;
    Motor * motor = new Motor(20);

    int mezo_szam;
    int kepernyo_meret;
    double mezo_meret;
    int jatekos;

    public:
        Jatekmester();

        void event_loop();




};

#endif // JATEKMESTER_HPP
