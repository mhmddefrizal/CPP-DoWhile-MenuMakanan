#include <iostream>

using namespace std;
main ()
{
	char makanan[40], jawab;
	float x=0, porsi, total_bayar, harga, total_seluruh=0;
	
	do{
		x++;
		cout<<"Pesanan Ke : "<<x <<endl;
		cout<<"Masukkan Menu Makanan : ";cin.ignore(); gets(makanan);
		cout<<"Masukkan Harga : ";cin>>harga;
		cout<<"Masukkan Jumlah Porsi : ";cin>>porsi;
		total_bayar = harga * porsi;
		total_seluruh = total_seluruh + total_bayar;
		cout<<"\n Total Bayar : "<<total_bayar;
		
		cout<<"\n Ingin Pesan Lagi ? [Y/T] : ";cin>>jawab;
	}
	while (jawab == 'y' || jawab == 'Y');
	
	cout<<"Total Seluruh : "<<total_seluruh;
}
