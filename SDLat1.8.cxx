#include <iostream>
using namespace std;

int main()
{
	int data = 5;
	int *pointerku;
	
	cout<<"Data : "<<data<<endl;
	cout<< "alamat data :"<<data<<endl;
	cout<<"pointerku :"<<data<<endl<<endl;
	
	pointerku=&data; //mengisi pointerku dengan alamat data 
	cout<<"pointerku :"<<pointerku<<endl<<endl;
	
	*pointerku =10; //merubah data dalam alamat yang ditunjuk pointerku
	cout<<"data :"<<data<<endl;
	
	system("pause");
	return 0;
}
