//------------------------------------------
//-- Dato de Entrada: x1, y1, x2,y2 (double)
//-- Dato de Salida: distancia (double)
//-------------------------------------------

#include "CPunto.h"

int main()
{ tnumero x1,y1,x2,y2;

    cout << "Punto 1 \n";
    cout << "x : "; cin >> x1;
    cout << "y : "; cin >> y1;
    cout << "Punto 2 \n";
    cout << "x : "; cin >> x2;
    cout << "y : "; cin >> y2;

    CPunto p1(x1,y1);
    CPunto p2(x2,y2);
    cout << "La distancia entre los puntos es: " << p1.distancia(p2) << "\n";
    cout << "La distancia entre los puntos es: " << p2.distancia(p1) << "\n";
    //---- creando objetos dinamicos
    CPunto * pP1 = new CPunto(x1,y1);
    CPunto * pP2 = new CPunto(x2,y2);


    cout << "La distancia entre los puntos es: " << pP1->distancia( *pP2) << "\n";
    delete pP1; pP1 = nullptr;
    delete pP2;  pP2 = nullptr;
    return 0;
}
