#include <iostream>
#include <stdlib.h>
using namespace std;

//--------------------------------//

    //Matrix 2d 1
int M2d1[2][2] = {{0,0},
                {0,0}};
    //Matrix 2d 2
int M2d2[2][2] = {{0,0},
                {0,0}};
    //Matrix 2d result
int R2d1[2][2] = {{0,0},
                {0,0}};

//--------------------------------//

    //Matrix 3d 1
int M3d1[3][3] = {{0,0,0},
                  {0,0,0},
                  {0,0,0}};
    //Matrix 3d 2
int M3d2[3][3] = {{0,0,0},
                  {0,0,0},
                  {0,0,0}};
    //Matrix 3d result
int R3d1[3][3] = {{0,0,0},
                  {0,0,0},
                  {0,0,0}};

//--------------------------------//

int Matrix2DPrint(){

        cout << "| " << M2d1[0][0] << " , ";
        cout << M2d1[0][1] << " | ";

        cout << "| " << M2d2[0][0] << " , ";
        cout << M2d2[0][1] << " |";

        cout << "  ";

        cout << "| " << R2d1[0][0] << " , ";
        cout << R2d1[0][1] << " |";

        cout <<endl;


        cout << "| " << M2d1[1][0] << " , ";
        cout << M2d1[1][1] << " | ";

        cout << "| " << M2d2[1][0] << " , ";
        cout << M2d2[1][1] << " |";

        cout << "  ";

        cout << "| " << R2d1[1][0] << " , ";
        cout << R2d1[1][1] << " |";

        cout <<endl;
}

int main(){


    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            Matrix2DPrint();
            cout << "podaj wartosc komorki M1: " << i << j << "   ";
            cin >> M2d1[i][j];
            system("cls");
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            Matrix2DPrint();
            cout << "podaj wartosc komorki M2 : " << i << j << "   ";
            cin >> M2d2[i][j];
            system("cls");
        }
    }

    R2d1[0][0] += M2d1[0][0] * M2d2[0][0] + M2d1[0][1] * M2d2[1][0];
    R2d1[0][1] += M2d1[0][0] * M2d2[0][1] + M2d1[0][1] * M2d2[1][1];
    R2d1[1][0] += M2d1[1][0] * M2d2[0][0] + M2d1[1][1] * M2d2[1][0];
    R2d1[1][1] += M2d1[1][0] * M2d2[0][1] + M2d1[1][1] * M2d2[1][1];

    Matrix2DPrint();
    return 0;
}
