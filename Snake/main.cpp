#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
    char litery[20][40] = {{}};
    int posX = 5;
    int posY = 5;
    litery[posY][posX] = {'O'};

    char input;
    int asciiValue;

    while(true)
    {
        for(int i=0; i < 20; i++)
        {
            for(int j=0; j< 40; j++)
            {
                cout << litery[i][j];
                litery[i][j] = {'|'};
            }
            cout <<" "<< endl;
        }
        litery[posY][posX] = {'O'};
        cout << "Pos X " << posX << endl;
        cout << "Pos Y " << posY << endl;

        input=getch();
        asciiValue=input;

        if(asciiValue==27){
            break;
        }

        if(asciiValue==100 ){
            posX += 1;
            //d
        }
        if(asciiValue==97  ){
            posX -= 1;
            //a
        }
        if(asciiValue==119 ){
            posY -= 1;
            //w
        }
        if(asciiValue==115  ){
            posY += 1;
            //s
        }

        system("cls");
    }
}
