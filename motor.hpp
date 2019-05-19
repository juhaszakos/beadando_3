#ifndef MOTOR_HPP
#define MOTOR_HPP
#include <vector>
using namespace std;

class Motor
{
    public:
        Motor(int darab);
        vector<vector<int>> getMatrix();
        void setMatrix(int x,int y,int jatekos);
        bool oszlopvizsgalat(int jatekos,int darab);
        bool soropvizsgalat(int jatekos,int darab);
        bool atlovizsgalat1(int jatekos,int darab);
        bool atlovizsgalat2(int jatekos,int darab);
        bool telivizsgalat(int darab);
    protected:
        vector<vector<int>> matrix;





};

#endif // MOTOR_HPP
