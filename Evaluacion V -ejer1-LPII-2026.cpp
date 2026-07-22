#include <iostream>

using namespace std;

int main() {
    float numer[10];
    
    float maximo = numer[0];
    float minimo = numer[0];
    
    for (int i = 0; i < 10; i++) {
    cout << "Ingrese el numero:" << i + 1 << ":"<<endl;
    cin >> numer[i];
}
    

    for (int i = 0; i < 10; i++) {
        if (numer[i] > maximo) maximo = numer[i];
        if (numer[i] < minimo) minimo = numer[i];
    }

    cout << "Este es el valor maximo: " << maximo << endl;
    cout << "Este es el valor minimo: " << minimo << endl;

    return 0;
}
