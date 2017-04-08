#include <iostream>
#include <cstdlib>
#include <cstdlib>
#include <cstdio>
#include <windows.h>
#include <ctime>
using namespace std;

int tablica[50] = {};
int secmem, ruchy = 0;

// Generate Table
int g_T(){
    for(int i = 0; i < (sizeof(tablica)/sizeof(*tablica));i++){
        tablica[i] += rand()%10;
    }
}
// Output Table
int o_T(){

    for (int j = 0; j < (sizeof(tablica)/sizeof(*tablica)); j++){
        cout << "--";
    }
    cout << endl;

    for(int i = 0; i < (sizeof(tablica)/sizeof(*tablica));i++){
        cout << tablica[i] << " ";
    }
    cout << endl;

    for (int j = 0; j < (sizeof(tablica)/sizeof(*tablica)); j++){
        cout << "--";
    }
    cout<<endl;
}
//Table Switch
int T_switch(int x, int y){
    secmem = tablica[x];
    tablica[x] = tablica[y];
    tablica[y] = secmem;
    cout << "zamieniam " << x << " z " <<y <<endl;
    o_T();
}
// Sort Table
int sort_T(){
    for (int j = 0; j < (sizeof(tablica)/sizeof(*tablica))-1; j++){
        if(tablica[j] > tablica[j + 1]){
            T_switch(j,j + 1);
            ruchy += 1;
        }
    }
}

int main(){
    srand(time(NULL));
    g_T();
    o_T();
        for(int i = 0; i < 1000; i++){
            sort_T();
        }
    cout << "sortowanie wykonano w " << ruchy << " ruchy";
}
