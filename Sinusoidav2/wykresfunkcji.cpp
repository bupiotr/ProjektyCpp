#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    char litery[40][100] = {{}};
    int y = 0;

    while(true)
    {
        for(int i=0; i < 40; i++)
        {
            for(int j=0; j< 100; j++)
            {
                y = 20 - sin(j)*2;
                litery[y][j] = {'|'};
                cout << litery[i][j];
            }
            cout <<" "<<endl;
        }
        Sleep(600);
        system("cls");
    }
}
