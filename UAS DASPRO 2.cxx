#include <iostream>
using namespace std;

class pelanggan {
public :
	string nama ;
	int nomormember ;
	string namabarang;
	int harga; 
	void cetak (){
	cout<<"Nama pelanggan :"<<nama<<endl
	<<"Nama barang yang dibeli :"<<namabarang<<endl
	<<"Nomor member pelanggan :"<<nomormember<<endl
	<<"Harga barang yang dibeli :"<<harga<<endl;
	}
};


int main (){
	pelanggan beli ;
	beli.nama = "Ratna";
	beli.nomormember= 123;
	beli.namabarang="bunga";
	beli.harga=12000;
	beli.cetak();
	system ("pause");
	return 0;
}