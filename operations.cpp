#include <iostream>

using namespace std;

int suma(int numUno, int numDos){
    return numUno + numDos;
}

int resta(int numUno, int numDos){
    return numUno - numDos;
}

int main(){
    cout << suma(8,2) << "\n";
    cout << resta(8,2) << "\n";
}