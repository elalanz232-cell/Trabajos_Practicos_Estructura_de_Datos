//encontrar la derivada, del polinomio 
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int pol[] = {3, 3,2, 1,5, 0,3};
    int m = pol[0];
    
    int der[7];
    int cantTerminos = 0;
    int j = 1;

    for(int i = 1; i <= 2*m-1; i+=2){
        int e = pol[i];
        int b = pol[i+1];

        if(e != 0){
            der[j]   = e - 1;
            der[j+1] = b * e;
            j += 2;
            cantTerminos++;
        }
    }
    der[0] = cantTerminos;

    cout << "Derivada: ( " << der[0];
    for(int i = 1; i <= 2*cantTerminos; i++){
        cout << ", " << der[i];
    }
    cout << " )" << endl;
}
