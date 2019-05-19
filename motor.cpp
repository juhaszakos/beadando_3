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

void Motor::setMatrix(int x,int y,int value){
    matrix[x][y] = value;
}

bool Motor::oszlopvizsgalat(int jatekos,int darab)
{

    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix.size();j++)
        {
            int szamlalo=0;
            if(i+5<darab)
            {

                for(int k=0;k<5;k++)
                {
                    if(matrix[i+k][j]==jatekos)
                    {
                        szamlalo++;
                    }


                }
            }
            if(szamlalo==5){
                return true;
            }

        }

    }


        return false;

}


bool Motor::soropvizsgalat(int jatekos, int darab)
{

    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix.size();j++)
        {
            int szamlalo=0;
            if(j+5<darab)
            {

                for(int k=0;k<5;k++)
                {
                    if(matrix[i][j+k]==jatekos)
                    {
                        szamlalo++;
                    }


                }
            }
            if(szamlalo==5){
                return true;
            }

        }

    }


        return false;

}

bool Motor::atlovizsgalat1(int jatekos, int darab)
{
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix.size();j++)
        {
            int szamlalo=0;
            if(j+5<darab && i+5<darab)
            {
                for(int k=0;k<5;k++)
                {
                    if(matrix[i+k][j+k]==jatekos)
                    {
                        szamlalo++;
                    }
                if(szamlalo==5)
                {
                    return true;
                }
                }

            }
            else if(j-5>=0 && i-5>=0)
            {
                for(int k=0;k<5;k++)
                {
                    if(matrix[i-k][j-k]==jatekos)
                    {
                        szamlalo++;
                    }
                if(szamlalo==5)
                {
                    return true;
                }
                }
            }

        }
    }


        return false;

}


bool Motor::atlovizsgalat2(int jatekos, int darab)
{
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix.size();j++)
        {
            int szamlalo=0;
            if(j-5>0 && i+5<darab)
            {
                for(int k=0;k<5;k++)
                {
                    if(matrix[i+k][j-k]==jatekos)
                    {
                        szamlalo++;
                    }
                if(szamlalo==5)
                {
                    return true;
                }
                }

            }
            else if(j+5<darab && i-5>0)
            {
                for(int k=0;k<5;k++)
                {
                    if(matrix[i-k][j+k]==jatekos)
                    {
                        szamlalo++;
                    }
                if(szamlalo==5)
                {
                    return true;
                }
                }
            }

        }
    }


        return false;

}

bool Motor::telivizsgalat(int darab)
{
    int szamlalo=0;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix.size();j++)
        {
            if(matrix[i][j]!=0)
            {
                szamlalo++;
            }
        }
    }
    if(szamlalo==(darab*darab))
    {
        return true;
    }
    else
    {
        return false;
    }
}
