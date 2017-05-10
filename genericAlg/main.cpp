#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

string szukany = "szym";
string tablica[80] = {};
// --------------- narzedzia --------------- //

int fitnes(string szukan){
    int fitnesP = 0;
    for(int i = 0; i < szukan.length(); i++){
        if(szukan[i] == szukany[i]){
            fitnesP += 1;
        }
    }
    return fitnesP;
}
string generateRandString(int x){
    char litery[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string output = "";
    for(int i = 0; i < x; i++){
        output += litery[rand()%26];
    }
    return output;
}
// --------------------------------------------- //
void firstGenerationPrint(int x){
    for(int j = 0; j < x; j++){
        cout << tablica[j] << " ";
    }
        cout <<endl;
}
void calcFitnes(int x){
    int fitnesTablica[80] = {};
    for(int i = 0; i < x ;i++){
        fitnesTablica[i] = fitnes(tablica[i]);
        cout << fitnesTablica[i] << "    ";
    }
    cout << endl;
}

void newGeneration(){
    int generation = 1;
    tablica[0 + 3*generation] = tablica[0 + 3*generation-1];
    tablica[1 + 3*generation] = tablica[0 + 3*generation-1];
    tablica[2 + 3*generation] = tablica[0 + 3*generation-1];
    tablica[3 + 3*generation] = tablica[0 + 3*generation-1];
    // DO DOKONCZENIA TUTAJ //
}

int main(){
    tablica[0] = "saaa";
    tablica[1] = "azaa";
    tablica[2] = "aaya";
    tablica[3] = "aaam";

    srand(time(NULL));
    firstGenerationPrint(4);
    calcFitnes(4);
}
