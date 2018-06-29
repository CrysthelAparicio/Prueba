#ifndef NODO_H
#define NODO_H

class Nodo{
    private:
        //seleccion* Sele;
        Nodo* siguiente;


    public:

        Nodo(Nodo*);
        Nodo getSiguiente();
};

#endif