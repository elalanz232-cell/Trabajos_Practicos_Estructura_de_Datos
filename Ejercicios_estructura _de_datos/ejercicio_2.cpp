//encontrar coinddencias en dos cadenas, si es, guardar y mostrar, siguiendo conceptos del documento
#include<iostream>
using namespace std;

int main(){
    char A[] = "Alan";
    char B[] = "Alas";
    
    int i = 0;
    int resultado = 0;
    
    while(A[i] != '\0' && B[i] != '\0'){
        if(A[i] < B[i]){
            resultado = -1;
            break;
        } else if(A[i] > B[i]){
            resultado = 1;
            break;
        }
        i++;
    }
    
    
    if(resultado == 0){
        if(A[i] != '\0') resultado = 1;   
        if(B[i] != '\0') resultado = -1;  
    }
    
    cout << resultado << endl;
}
