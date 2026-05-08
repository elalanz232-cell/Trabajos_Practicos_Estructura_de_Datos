#include<iostream>
using namespace std;
int main(){
	
    int L[5]={3,6,11,15,18}, n=5, x=11;
    
    for(int i=0;i<n;i++){
	
    	if(L[i]==x) L[i]='*';
    }
	
    for(int i=0;i<n;i++) {
    	
	cout<<L[i]<<" ";
	
	}
}
