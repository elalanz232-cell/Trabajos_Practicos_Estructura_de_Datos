//Encontrar tranpuesta de una matriz uy armar una sparce
#include<iostream>
using namespace std;

int main(){
	
	int T[6][3];             //Ejercicio que mas me costo al principio, me ayudo a entender el siete y ocho
	int M[6][3] = {
    {3, 3, 5},  
    {1, 1, 1},  
    {1, 3, 2},  
    {2, 2, 3},  
    {3, 1, 4},  
    {3, 3, 5}   
};

	int filas    = M[0][0];
	int columnas = M[0][1];  
	int noceros  = M[0][2];  
	int j=1;
	for(int col=1; col<=columnas;col++){
		
		for(int i=1; i<=noceros; i++){
			
			if(M[i][1] == col){
    			T[j][0] = M[i][1]; 
   				T[j][1] = M[i][0];  
    			T[j][2] = M[i][2];  
    			j++;                
}
			
		}
		
	}
	
	
		T[0][0] = columnas;
		T[0][1] = filas;
		T[0][2] = noZeros;


	for(int i=0; i<=noceros; i++){
    cout << T[i][0] << " " << T[i][1] << " " << T[i][2] << endl;
}
	
}
