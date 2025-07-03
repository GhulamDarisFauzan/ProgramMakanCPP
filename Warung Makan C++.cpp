#include <iostream>


using namespace std;

int main()
{
	
  int PilihMenu,jumlah,harga = 0, total = 0;
  string ulangi;
  
  	
do 
{

	do{

  system("cls");
  cout<<"======================================================="<<endl;	
  cout<<"========== Selamat Datang di Warung Ngbakso ==========="<<endl;
  cout<<"======================================================="<<endl;
  cout<<"Menu yang Tersedia: "<<endl;
  cout<<"1.Bakso Mercon : Rp.25.000,00"<<endl;
  cout<<"2.Bakso Malang : Rp.15.000,00"<<endl;
  cout<<"3.Bakso Cuanki : Rp.15.000,00"<<endl;
  cout<<"4.Bakso Urat   : Rp.20.000,00"<<endl;
  cout<<"5.Mie Ayam     : Rp.13.000,00"<<endl;
  cout<<"6.Mie Ayam + Bakso : Rp.20.000,00"<<endl;
  cout<<"Pilih Menu[1-6]: "; cin>>PilihMenu;
  	
	
} while (PilihMenu < 1 || PilihMenu > 6);

  		system("cls");
        switch (PilihMenu) {
            case 1:
                harga = 25000;
                cout << "Kamu memilih Bakso Mercon, harga 1 porsi: Rp.25.000,00\n";
                break;
            case 2:
                harga = 15000;
                cout << "Kamu memilih Bakso Malang, harga 1 porsi: Rp.15.000,00\n";
                break;
            case 3:
                harga = 15000;
                cout << "Kamu memilih Bakso Cuanki, harga 1 porsi: Rp.15.000,00\n";
                break;
            case 4:
                harga = 20000;
                cout << "Kamu memilih Bakso Urat, harga 1 porsi: Rp.20.000,00\n";
                break;
            case 5:
                harga = 13000;
                cout << "Kamu memilih Mie Ayam, harga 1 porsi: Rp.13.000,00\n";
                break;
            case 6:
                harga = 20000;
                cout << "Kamu memilih Mie Ayam + Bakso, harga 1 porsi: Rp.20.000,00\n";
                break;
        }

        cout << "Masukkan Jumlah Porsi: ";
        cin >> jumlah;
        
        total = harga * jumlah;
		
		system("cls");
        cout << "=======================================================" << endl;
        cout << "Jumlah Porsi       : " << jumlah << endl;
        cout << "Total Harga        : Rp." << total << ",00" << endl;
        cout << "Silakan dibayarkan ke DANA nomor: 676790" << endl;
        cout << "=======================================================" << endl;
        cout<<endl;

        cout << "\nApakah ingin memesan lagi? (y/n): ";
        cin >> ulangi;

	

	
} while(ulangi == "y" || ulangi == "Y");
	
	system("cls");
	cout << "======================================================="<<endl;
	cout << "=== Terima kasih telah memesan di Warung Ngbakso! ====="<<endl;
	cout << "======================================================="<<endl; 
	return 0;
	
};
