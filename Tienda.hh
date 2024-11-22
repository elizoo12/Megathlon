#ifndef Tienda.hh
#define Tienda.hh

#include "Bintree.hh"
#include "Caja.hh"
#include "Cliente.hh"

typedef Bintree<string> BT;


class Tienda{

private:

    BT salas;

    //he añadido esta linea, necesitamos saber cuantos clientes entran para darles identificador.
    int n_clientes;

    Caja *cajas;


public:


}



#endif
