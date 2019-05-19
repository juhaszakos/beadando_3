#include "jatekmester.hpp"
#include "graphics.hpp"
#include "mezo.hpp"





Jatekmester::Jatekmester()
{

    jatekos=1;
   gout.open(400,400);
    mezo_meret=(int) 400/motor->getMatrix().size();


   for(unsigned int i=0;i<motor->getMatrix().size();i++)
   {
       for(unsigned int j=0;j<motor->getMatrix()[i].size();j++)
       {
         m.push_back(new Mezo(i*mezo_meret+1,j*mezo_meret+1,mezo_meret-1,mezo_meret-1));
       }
   }




}

void Jatekmester::event_loop()
{

    event ev;
    int focus = -1;
    while(gin >> ev ) {
        if (ev.type == ev_mouse && ev.button==btn_left ) {
            for (size_t i=0;i<m.size();i++) {
                if (m[i]->is_selected(ev.pos_x, ev.pos_y) && !m[i]->getKattintva() && !win ) {
                        focus = i;

                        if(jatekos==1 )
                        {

                            jatekos=-1;

                        }
                        else if(jatekos==-1)
                        {

                            jatekos=1;

                        }

                int x = (int)focus/motor->getMatrix().size();
                int y = focus % motor->getMatrix().size();
                motor->setMatrix(x,y,jatekos);
                if(motor->oszlopvizsgalat(-1,20)==true || motor->soropvizsgalat(-1,20)==true || motor->atlovizsgalat1(-1,20)==true || motor->atlovizsgalat2(-1,20)==true || motor->telivizsgalat(20)==true)
                {
                   win=true;
                }
                else if(motor->oszlopvizsgalat(1,20)==true || motor->soropvizsgalat(1,20)==true || motor->atlovizsgalat1(1,20)==true || motor->atlovizsgalat2(1,20)==true || motor->telivizsgalat(20)==true)
                {
                   win=true;
                }
                else
                {
                    win=false;
                }




                }
            }
        }
        if (focus!=-1) {
            m[focus]->handle(jatekos);



        }
        for (Widget * w : m) {
            w->draw();
        }

        gout << refresh;

    }

}




