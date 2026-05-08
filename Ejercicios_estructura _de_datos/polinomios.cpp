//Armar un polinomiosiguendo la documentacion del trabajo practico e usar libreria cmath
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int pol[] = {3, 3,2, 1,5, 0,3};
    int m = pol[0];
    double x0 = 2;
    double resultado = 0;

    for(int i = 1; i <= 2*m-1; i+=2){
        int e = pol[i];
        int b = pol[i+1];
        resultado += b * pow(x0, e);
    }

    cout << "Resultado: " << resultado << endl;
}
