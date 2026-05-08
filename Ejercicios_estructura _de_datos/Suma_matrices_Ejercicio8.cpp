//hacer suma de dos matrices sparce, fue aplicar la misma logica que el ejercicio seis
#include<iostream>
using namespace std;

int main(){

   
    int A[5][3] = {
        {3, 3, 4},    
        {1, 1, 1},
        {1, 3, 2},
        {2, 2, 3},
        {3, 3, 5}
    };

    
    int B[4][3] = {
        {3, 3, 3},  
        {1, 1, 4},
        {2, 2, 2},
        {3, 1, 7}
    };

    int nocerosA = A[0][2];
    int nocerosB = B[0][2];

  
    int C[8][3];
    int j = 1;  C

   
    for(int i = 1; i <= nocerosA; i++){
        int fila = A[i][0];
        int col  = A[i][1];
        int val  = A[i][2];

        
        bool encontrado = false;
        for(int k = 1; k <= nocerosB; k++){
            if(B[k][0] == fila && B[k][1] == col){
                
                int suma = val + B[k][2];
                if(suma != 0){
                    C[j][0] = fila;
                    C[j][1] = col;
                    C[j][2] = suma;
                    j++;
                }
                encontrado = true;
                break;
            }
        }

        
        if(!encontrado){
            C[j][0] = fila;
            C[j][1] = col;
            C[j][2] = val;
            j++;
        }
    }

   
    for(int k = 1; k <= nocerosB; k++){
        bool encontrado = false;
        for(int i = 1; i <= nocerosA; i++){
            if(A[i][0] == B[k][0] && A[i][1] == B[k][1]){
                encontrado = true;
                break;
            }
        }
        if(!encontrado){
            C[j][0] = B[k][0];
            C[j][1] = B[k][1];
            C[j][2] = B[k][2];
            j++;
        }
    }

    
    C[0][0] = A[0][0];
    C[0][1] = A[0][1]; 
    C[0][2] = j - 1;  

   
    cout << "Matriz c (creada):" << endl;
    for(int i = 0; i <= j-1; i++){
        cout << C[i][0] << " " << C[i][1] << " " << C[i][2] << endl;
    }
}
