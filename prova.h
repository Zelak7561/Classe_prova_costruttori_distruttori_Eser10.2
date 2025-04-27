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

//getter
int* getArr() {
  return arr;
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

void searchVal(int n , int pos){
    for(int i = 0; i < dim; i++){
        if(n == arr[i] && pos == i){
            cout << "Numero: " << n << " trovato" << endl;
            break;
        } else {
            cout << "Numero non trovato" << endl;
        }
    }
}

void setVal(int val , int pos){
     for(int i = 0; i < dim; i++){
        if(pos == i && val != arr[i]){
            arr[i] = val;
            cout << "Numero: " << val << " impostato" << endl;
            break;
        } else {
            cout << "Numero non settato" << endl;
        }
    }
}

int lenghtA(){
    int lenght = 0;
    for(int i = 0; i < dim; i++){
            lenght++;
    }
    return lenght;
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
