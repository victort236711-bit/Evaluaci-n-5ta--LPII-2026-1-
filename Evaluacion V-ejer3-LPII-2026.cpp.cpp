

#include <iostream>
using namespace std;

const int FILAS = 8;
const int COLUMNAS = 8;

int main() {

    char tablero[FILAS][COLUMNAS];

    
    char piezasFilaTrasera[COLUMNAS] = {'T', 'C', 'A', 'M', 'R', 'A', 'C', 'T'};

    for (int fila = 0; fila < FILAS; fila++) {
        for (int columna = 0; columna < COLUMNAS; columna++) {

        if (fila == 0) {
                
        tablero[fila][columna] = piezasFilaTrasera[columna];
            } else if (fila == 1) {
                
                tablero[fila][columna] = 'P';
            } else if (fila == 6) {
            
                tablero[fila][columna] = 'P';
            } else if (fila == 7) {
                
                tablero[fila][columna] = piezasFilaTrasera[columna];
            } else {
                
                tablero[fila][columna] = '.';
            }
        }
    }

    
    cout << "===== TABLERO DE AJEDREZ =====\n\n";

    cout << "   a  b  c  d  e  f  g  h\n";
    for (int fila = 0; fila < FILAS; fila++) {
        
        cout << 8 - fila << "  ";
        for (int columna = 0; columna < COLUMNAS; columna++) {
            cout << tablero[fila][columna] << "  ";
        }
        cout << "\n";
    }

    cout << "\nLeyenda: P=Peon  T=Torre  C=Caballo  A=Alfil  R=Rey  M=Reina  .=Vacio\n";

    return 0;
}
