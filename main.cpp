#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese su edad";
    cin >> edad;
    while(edad<0 or edad>120) {
        cout << "Invalido. Ingrese su edad: ";
    }

    if (edad<=4) {
        cout << "Infante";
    }
    else if(edad<=12) {
        cout << "Niño";
    }
    else if(edad<=17) {
        cout << "Adolescente";
    }
    else if(edad<=64) {
        cout <<"Adulto";
    }
    else {
        cout << "Adulto mayor";
    }
    return 0;
}
