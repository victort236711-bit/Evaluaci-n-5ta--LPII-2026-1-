#include <iostream>
#include <string>

using namespace std;

int main() {
   
    string alumnos[5];
    float notas[5];

for (int i = 0; i < 5; i++) {cout << "Ingrese el nombre del alumno " << (i + 1) << ": ";
cin >> alumnos[i];
cout << "Ingrese la nota de " << alumnos[i] << ": ";
cin >> notas[i];
}

    for (int i = 0; i < 5; i++) {
    int pos = i;
    float auxNota = notas[i];
    string auxAlumno = alumnos[i];
       
       
    while (pos > 0 && notas[pos - 1] > auxNota) {
	notas[pos] = notas[pos - 1];
    alumnos[pos] = alumnos[pos - 1];
	pos--;
    }
    notas[pos] = auxNota;
    alumnos[pos] = auxAlumno;
    }

    cout << "final de todos" << endl;
    for (int i = 0; i < 5; i++) {
    cout << alumnos[i] << ": " << notas[i] << endl;
    }

    return 0;
}
