#include "motor.hpp"

Motor::Motor(int darab)
{


            for(int i=0;i<darab;i++)
            {
                vector<int> tmp;
                for(int j=0; j<darab;j++)
                {
                    tmp.push_back(0);
                }
                matrix.push_back(tmp);
            }


}


vector<vector<int>> Motor:: getMatrix()
{
    return matrix;
}
