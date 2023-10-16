//
// Created by mbermejo on 16/10/2023.
//

#ifndef DOSPUNTOS_CPUNTO_H
#define DOSPUNTOS_CPUNTO_H

#include <iostream>
#include <cmath>

using namespace std;

using tnumero = double;


class CPunto
{
  private:
   tnumero  x;
   tnumero  y;
  public:
    CPunto(){}
    CPunto(tnumero _x, tnumero _y):x(_x), y(_y){}
    virtual ~CPunto(){ cout << "me estoy destruyendo....";}
    //---- metodos de acceso
    void setX(tnumero _x) { x = _x;}
    tnumero getX(){ return x;}
    void setY(tnumero _y) {  y=_y;}
    tnumero getY(){ return y;}

    tnumero distancia( CPunto &unPunto);
};


#endif //DOSPUNTOS_CPUNTO_H
