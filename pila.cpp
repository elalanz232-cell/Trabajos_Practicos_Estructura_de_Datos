#include <iostream>
using namespace std;


int S[5];
int tope = 0;


void AGREGAR(int x);
void ELIMINAR();


int main() {
    agregar(3);
    agregar(10);
    agregar(50);

    eliminar(); 
	eliminar();  

   return 0;
}

void AGREGAR(int x) {
    if (tope == 5) {
        cout<<"Llena"<<endl;
        return;
    }
    tope = tope + 1;
    S[tope] = x;
}

void ELIMINAR() {
    if (tope <= 0) {
        cout<<"Vacia"<<endl;
        return;
    }
    tope = tope - 1;
}
