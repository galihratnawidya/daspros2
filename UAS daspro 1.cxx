#include <iostream>
using namespace std;

struct pelanggan {
	string nama ;
	int nomormember ;
	string namabarang;
	int harga; 
	
};
void cetak (pelanggan temp){
	cout<<"Nama pelanggan :"<<temp.nama<<endl
	<<"Nama barang yang dibeli :"<<temp.namabarang<<endl
	<<"Nomor member pelanggan :"<<temp.nomormember<<endl
	<<"Harga barang yang dibeli :"<<temp.harga<<endl;
};

int main (){
	pelanggan beli ;
	beli.nama = "Ratna";
	beli.nomormember= 123;
	beli.namabarang="bunga";
	beli.harga=12000;
	cetak (beli);
	system ("pause");
	return 0;
}