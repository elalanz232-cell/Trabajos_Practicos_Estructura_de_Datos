//Buscar silla de una matriz (Nota: es el mayor de la colmna y el meor de su fila)
#include<iostream>
using namespace std;

int main(){
    int M[3][3] = {                          
        {1, 5, 3},
        {4, 2, 6},
        {7, 8, 9}
    };
    
    bool encontrado = false;
    
    
    for(int i = 0; i < 3; i++){
        
       
        int maxVal = M[i][0];
        int maxCol = 0;
        for(int j = 1; j < 3; j++){
            if(M[i][j] > maxVal){
                maxVal = M[i][j];
                maxCol = j;
            }
        }
        
        
        int minVal = M[0][maxCol];
        for(int k = 1; k < 3; k++){
            if(M[k][maxCol] < minVal){
                minVal = M[k][maxCol];
            }
        }
        
        
        if(maxVal == minVal){
            cout << "Punto de silla: " << maxVal << endl;
            encontrado = true;
        }
    }
    
    if(!encontrado){
        cout << "No tiene punto de silla" << endl;
    }
}




/*  buscando en documentacion encontre esta
int M[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};*/
