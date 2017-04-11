#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
using namespace std;

double i = 0, suma = 0, w;

int main(){

    // 1/1^x + 1/2^x + 1/3^x + 1/4^x + 1/5^x + 1/6^x

    cout << "podaj potege : ";
    cin >> w;


    for(int n = 1; n < 1000; n++){
        i = 1/pow(n,w);
        suma += i;
        cout << "--------"<<endl;
        cout << suma << " + " << i  <<endl;
        Sleep(10);
        system("cls");
    }
}
