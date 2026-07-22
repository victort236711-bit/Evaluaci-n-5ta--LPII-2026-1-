#include<iostream>
using namespace std;

int main(){
	
	
	int elemento[6];
	int numero;
	
	cout<<"Ingrese 6 numero en la consola:"<<endl;

	
	for(int i=0 ; i<6 ; i++){
		
	cout<<"elemento:"<<i+1<<":"<<endl;
	cin>>elemento[i];
}

	for(int i=0 ; i<6 ; i++){
	for(int j=0 ; j<6 ; j++){
		
	if(elemento[j]>elemento[j+1]){
		numero=elemento[j];
		elemento[j]=elemento[j+1];
		elemento[j+1]=numero;
			}
			
		}
	
}
cout << "Arreglo ordenado: ";
    for(int i = 0; i < 6; i++) {
        cout << elemento[i] << " ";
    }
    cout << endl;
}
