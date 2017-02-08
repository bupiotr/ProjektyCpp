#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

int main()
{
    double x = 0;
    int result = 0;
    int y;
    for (int i = 0;i <= 600; i++)
    {
        for (y = 0;y <= 40 - result;y++){
            cout <<" ";
        }
        cout << "*";
        Sleep(20);
        x += M_PI / 20;
        result = sin(x) * 20;
        cout << "" <<endl;
    }
    return 0;
}
