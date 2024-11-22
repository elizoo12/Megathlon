#ifndef CLiente_HH
#define CLiente_HH

typedef bintree<string> BT


class Cliente{

private:
//primer ticket
    struct ticket1{
        int id;
        BT recorrido;
        list<string> direcciones;
        //opcion1: map<string, int> prod_deseados;
        //opcion2: list<pair<string, int>> prod_deseados;

    };

//segundo ticket
    struct ticket2{
        time h_recogida;
        time h_salida;
        int id_caja;
        //opcion1: map<string, int> prod_comp_no_deseados;
        //opcion2: list<pair<string,int>>, prod_comp_no_deseados;
    }






/* INV de la clase:

id>=1



 */


public:





}




#endif
