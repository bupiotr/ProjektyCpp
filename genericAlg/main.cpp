#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

string generateRandString(int x){
    char litery[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string output = "";
    for(int i = 0; i < x; i++){
        output += litery[rand()%26];
    }
    return output;
}

int main(){
    srand(time(NULL));
    cout << generateRandString(5);

}
