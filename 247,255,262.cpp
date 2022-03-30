#include <iostream>
#include <string>
#include <fstream>
#include<conio.h>
using namespace std;

void dismen(){
  cout << "\n1.Ayam Geprek\t: Rp. 21000";
  cout << "\n2.Ayam Goreng\t: Rp. 17000";
  cout << "\n3.Udang Goreng\t: Rp. 19000";
  cout << "\n4.Cumi Goreng\t: Rp. 20000";
  cout << "\n5.Ayam Bakar\t: Rp. 25000";
}

int main() {
  int pilih,banyak;
  char lagi;
  int i;
  int total,jarak;
  int ongkir = 0;
  int subtotal=0;
  int totmak=0;
  int diskon;
  
  cout << "\nSelamat datang di Rumah Makan UNCLE MUTHU"<<endl;
  cout<<"\n==========================================="<<endl;
  dismen();
  cout<<"\n============================================="<<endl;
  do{
    cout << "Masukan pilihan menu anda : ";
    cin >> pilih;
    cout << "Masukkan banyaknya pesanan : ";
    cin >> banyak;
    switch (pilih)
    {
    	case 1:
     		total = 21000*banyak;
     		break;
     	case 2:
     		total = 17000*banyak;
     		break;
     	case 3:
     		total = 19000*banyak;
     		break;
     	case 4:
     		total = 20000*banyak;
     		break;
     	case 5:
     		total = 25000*banyak;
     		break;	
    }
    cout << "Apakah ada lagi pesanan anda? (y/n) =  ";
    cin >> lagi;
    totmak+=total;
    subtotal += total;
  }while(lagi == 'y');
  cout << "Yey, Kamu telah selesai memesan\n";
  cout << "Masukkan Jarak Rumah kamu (KM) : ";
  cin >> jarak;
  if (subtotal >25000 && subtotal <=50000)
  {
  	ongkir -=3000;
  }
  else if (subtotal >50000 && subtotal <=150000)
  {
  	ongkir -=5000;
  	diskon = (subtotal*0.15);
  }
  else if (subtotal >150000)
  {
  	ongkir -=8000;
  	diskon= (subtotal*0.35);
  }
  do {
  	if (jarak <= 3){
  		ongkir = 15000;
  	}
 	 else if (jarak > 3)
  	{
  		ongkir =25000;
  	}
  	else{
  		cout << "Tidak terdeteksi, masukkan ulang";
  	}
  	if (jarak <= 3){
  		ongkir = 15000;
  	}
  	else if (jarak > 3)
  	{
  		ongkir= 25000;
  	}
  	else{
  		cout << "Tidak terdeteksi, masukkan ulang";
  	}
  }while(jarak <0);
  cout<<"\n==========================================="<<endl;
  cout << "Masukkan jumlah pembayaran = ";
  int bayar;
  cin >> bayar;
  int kembalian;
  kembalian = bayar - (totmak+ongkir-diskon);
  
  ofstream kasir;
	kasir.open("Struk.txt");
	kasir<< "\n=========================================================";
	kasir << "					\nRumah Makan UNCLE MUTHU	  			";
	kasir<< "\n=========================================================";
	kasir << "\nHarga Makanan		Harga Ongkir		Diskon\n";
	kasir << "Rp."<<totmak<<"\t + \tRp."<<ongkir<<"\t - \tRp."<<diskon;	
	kasir<< "\n========================================================";
	kasir << "\nTotal \t\t\t\t\tRp."<< totmak+ongkir-diskon;
	kasir << "\n Bayar = "<< "Rp."<< bayar;
	kasir << "\n Kembalian = "<< "Rp."<< kembalian;
	kasir<< "\n===================Terima Kasih=========================";

	
	cout << "Struk sudah di cetak :3";
	cout << "\nTerima Kasih ,Tekan apa saja untuk keluar .....";
	getch();
	return 0;
}
