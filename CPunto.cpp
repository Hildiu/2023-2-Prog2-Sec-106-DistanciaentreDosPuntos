//
// Created by mbermejo on 16/10/2023.
//

#include "CPunto.h"


tnumero CPunto::distancia( CPunto & unPunto)
{
  return sqrt( pow((unPunto.x - x),2 ) + pow( (unPunto.y - y), 2));

}