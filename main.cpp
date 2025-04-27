#include <iostream>
#include "prova.h"

using namespace std;


int main()
{

Prova prov1;

int dim;
int valC , valS;
int posC, posS;

    cout << "Inserire la dimensione dell'array: " << endl;
    cin >> dim;
    cout << "|============================================================|" << endl;

    prov1.setDim(dim);
    prov1.allocate();
    prov1.fillA();
    cout << "|============================================================|" << endl;


    cout << "Inserire un valore da cercare nell'array: " << endl;
    cin >> valC;

    cout << "Inserire la posizione nella quale si vuole cercare nell'array: " << endl;
    cin >> posC;

    prov1.searchVal(valC , posC);
    cout << "|============================================================|" << endl;


    cout << "Inserire un valore da settare nell'array: " << endl;
    cin >> valS;

    cout << "Inserire la posizione nella quale si vuole settare nell'array: " << endl;
    cin >> posS;

    prov1.setVal(valS , posS);
    cout << "|============================================================|" << endl;
    cout << "lunghezza Array: " << prov1.lenghtA() << endl;
    cout << "Puntatore array: " << prov1.getArr() << endl;
    cout << "|============================================================|" << endl;

    prov1.print();
    cout << "|============================================================|" << endl;


    return 0;
}
