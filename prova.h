#ifndef PROVA_H_INCLUDED
#define PROVA_H_INCLUDED

#include <iostream>

using namespace std;

class Prova {

int dim;
int* arr;

public :
     Prova(){}

//setter
void setDim(int dime){
  this->dim = dime;
}


//methods
void allocate(){
    arr = new int[dim];
}

void fillA(){
    for(int i = 0; i < dim; i++){
        int n = 0;
        cout << "inserire elemento n: " << i << endl;
        cin >> n;
        arr[i] = n;
    }
}

bool getVal(int pos, int &data){
        if (pos >= 0 && pos < dim) {
            data = arr[pos];
            return true;
        } else {
            cout << "Numero non trovato" << endl;
            return false;
        }
}

bool setVal(int val , int pos){
        if(pos >= 0 && pos < dim){
            arr[pos] = val;
            cout << "Numero: " << val << " impostato" << endl;
            return true;
        } else {
            cout << "Numero non settato" << endl;
            return false;
        }
}




int len(){
    int len = 0;
    for(int i = 0; i < dim; i++){
            len++;
    }
    return len;
}

int* pointer() {
  return arr;
}

void print(){
    for(int i = 0; i < dim; i++){
        cout << "elemento: " << i << " valore: " << arr[i] << endl;
    }
}

 ~Prova() {
        delete[] arr;
    }


};

#endif // PROVA_H_INCLUDED
