#include<iostream>
using namespace std;
int main() {
    int arreglo[]={4,0,1,0,8,3,0,2,9,5};
     
        
    for (int i = 0; i < 10 - 1; i++) {
    for (int j = 0; j < 10 - i - 1; j++) {
    bool intercambiar = false;
    if (arreglo[j] == 0 && arreglo[j + 1] != 0) {
    intercambiar = true;
    } else if (arreglo[j] != 0 && arreglo[j + 1] != 0 && arreglo[j] > arreglo[j + 1]) {
    intercambiar = true;
    }
   if (intercambiar) {
	int temp = arreglo[j];
    arreglo[j] = arreglo[j + 1];
    arreglo[j + 1] = temp;
    }
    }
}

    cout << "Para este es el resultado final: "<<endl;
    for (int i = 0; i < 10; i++) cout << arreglo[i] << " ";
    cout << endl;

    return 0;
         
}
