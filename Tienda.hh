#ifndef Tienda.hh
#define Tienda.hh

#include "Bintree.hh"
#include "Caja.hh"
#include "Cliente.hh"

typedef Bintree<string> BT;


class Tienda{

private:

    BT salas;

    int n_clientes;
    Caja *cajas;


public:


}



#endif
