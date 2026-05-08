//Buscar y encontrar, si existe en los dos lados aumentar sueldo, encarar por matroces
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    
    char empApellido[4][20] = {"Coronel", "Yampa", "Marina", "Armando"};
    char empNombre[4][20]   = {"Alan", "Jose", "Luis", "Maria"};
    float empSueldo[4]      = {45000, 60000, 55000, 50000};
    int nEmp = 4;

   
    char aluApellido[4][20] = {"Coronel", "Yampa", "Marina", "Silva"};
    char aluNombre[4][20]   = {"Alan", "Jose", "Luis", "Millan"};
    float aluPromedio[4]    = {9, 6, 8, 7};
    int nAlu = 4;

    for(int i = 0; i < nAlu; i++){
        if(aluPromedio[i] > 7){
           
            for(int j = 0; j < nEmp; j++){
                if(strcmp(aluApellido[i], empApellido[j]) == 0 &&
                   strcmp(aluNombre[i],   empNombre[j])   == 0){
                    empSueldo[j] *= 1.10;  
                    cout << empApellido[j] << " " << empNombre[j] 
                         << " nuevo sueldo: " << empSueldo[j] << endl;
                }
            }
        }
    }
}
