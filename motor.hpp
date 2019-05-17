#ifndef MOTOR_HPP
#define MOTOR_HPP
#include <vector>
using namespace std;

class Motor
{
    public:
        Motor(int darab);
        vector<vector<int>> getMatrix();
    protected:
        vector<vector<int>> matrix;





};

#endif // MOTOR_HPP
