#include<iostream>
using namespace std; 

int main(){
	int temp;
	int angka[6]={25,65,01,9,50,100}; 
	
	cout<<"Angka sebelum urut ="; 
	for (int i=0;i<6;i++){
		cout<<angka[i]<< " "; 
	} cout<<endl; 
	
	for (int i=0;i<5;i++){
		for (int j=0;j<6;j++){
			if (angka[j]>angka[j+1]){
				temp=angka[j];
				angka[j]=angka[j+1];
				angka[j+1]=temp; 
			}
		}
	}
	cout<<"Data setelah urut: " ; 
	for (int i=0;i<6;i++){
		cout<<angka[i]<<" ";
	}cout<<endl;
	return 0;
}