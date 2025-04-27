#include <iostream>
#include "prova.h"

using namespace std;


int main(){

Prova prov1;

int dim;
int valC , valS;
int posC, posS;
int data;

    cout << "Inserire la dimensione dell'array: " << endl;
    cin >> dim;
    cout << "|============================================================|" << endl;

    prov1.setDim(dim);
    prov1.allocate();
    prov1.fillA();

    cout << "|============================================================|" << endl;
    cout << "Inserire la posizione nella quale si vuole cercare nell'array: " << endl;
    cin >> posC;

    prov1.getVal(posC, data);
    cout << "Posizione: " << posC << " valore: " << data << endl,
    cout << "|============================================================|" << endl;

    cout << "Inserire un valore da settare nell'array: " << endl;
    cin >> valS;

    cout << "Inserire la posizione nella quale si vuole settare nell'array: " << endl;
    cin >> posS;

    prov1.setVal(valS , posS);
    cout << "|============================================================|" << endl;
    cout << "lunghezza Array: " << prov1.len() << endl;
    cout << "Puntatore array: " << prov1.pointer() << endl;
    cout << "|============================================================|" << endl;

    prov1.print();
    cout << "|============================================================|" << endl;

    //test commit
    return 0;
}
