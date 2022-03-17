//RESPONSI2DDP
#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string>

using namespace std;

struct id{
char nama[50];
char banyak [50];
};


int main(void)
{
    id barang;
cout << "INPUT DATA BARANG MASUK FOTOCOPY \n";
cout << "============================================ \n";
cout << "Masukan Nama Barang             : ";
cin.getline(barang.nama, 50);
cout << "Masukan Banyak Barang           : ";
cin.getline(barang.banyak,50);
cout << endl;
cout << "============================================ \n\n";
cout << "----------DATA BARANG MASUK SEBAGAI BERIKUT---------- \n";
cout << " - " << barang.nama << endl;
cout << " - " << barang.banyak << endl;
cout << endl;
cout << endl;
cout << endl;


    int pilih,harga[100],jumlah[100],jumlah_belanja,total[100],bayar;
    string nama_barang[100];
    float total_harga;
                                                                    
    cout << "==========TOKO FOTOCOPY==========\n";
    cout << "1). Belanja \n";
    cout << "2). Cetak Struk Belanjaan \n";
    cout << "Silahkan Pilih : ";
    cin >> pilih;

    if (pilih == 1){
        cout << "Masukan Jumlah Belanjaan Anda : ";
        cin >> jumlah_belanja;

        for (int i = 0; i < jumlah_belanja; i++){
            cout << "Masukan Barang ke - " << i+1 << "\n";
            cout << "Masukan Nama Barang : ";
            cin >> nama_barang[i];
            cout << "Masukan Jumlah Barang : ";
            cin >> jumlah[i];
            cout << "Masukan Harga Barang : ";
            cin >> harga[i];

            total[i] = harga[i] * jumlah[i]; 

            total_harga += total[i];

        }
        cout << endl;

        cout << "===================================\n";
        cout << "               NOTA            \n";
        cout << "===================================\n";

        cout<<"No     Barang    Jumlah    Harga    Total\n";
        for (int i =0; i < jumlah_belanja; i++){       
           cout<<i+1<<"\t"<<nama_barang[i]<<"\t  "<<jumlah[i]<<"\t      "<<harga[i]<<"\t"<<total[i]<<endl;
        }
        cout << "===================================\n";
        cout << "Jumlah Bayar   : Rp." << total_harga << endl;
        cout << "Total Bayar    : Rp." << total_harga << endl;
        cout << "Bayar          : Rp.";
        cin >> bayar;
        cout << "Kembalian      : Rp." << (bayar-(total_harga)) << endl; 
        cout << "===================================\n";
    }
    cout << "Silahkan Cetak Struk Anda dengan Menekan Nomer 2 Pada Keyboard :) \n";
    cout << "Masukan Pilihan Disini !! : ";
    cin  >> pilih;
    if (pilih == 2){
        cout << "================================\n";
        cout << "              NOTA       \n";
        cout << "================================\n";
        cout << "No     Barang    Jumlah    Harga    Total \n";
        for (int i =0; i < jumlah_belanja; i++){
            cout<<i+1<<"\t"<<nama_barang[i]<<"\t  "<<jumlah[i]<<"\t      "<<harga[i]<<"\t"<<total[i]<<endl;
            cout << endl;
        }

        cout << "Jumlah Belanjaan : " << jumlah_belanja << endl;
        for(int i=0; i < jumlah_belanja; i++){
        cout << "Nama Barang    : " << nama_barang[i] << endl;
        cout << "Jumlah Barang   : " << jumlah[i] << endl;
        cout << "Harga Barang   : " << harga[i] << endl;
        cout << endl;
        }
        cout << "===================================\n";
        cout << "Jumlah Bayar   : Rp." << total_harga << endl;
        cout << "Total Bayar    : Rp." << total_harga << endl;
        cout << "Bayar          : Rp." << bayar << endl;;

        cout << "Kembalian      : Rp." << (bayar-(total_harga)) << endl;
        cout << "===================================\n";
        cout << "           TERIMAKASIH             \n";
        cout << "         ===============           \n";
    }

fstream myBarang;
    myBarang.open("barang.txt",ios::out);
        if(myBarang.is_open()){
    myBarang << "============================================ \n\n";
    myBarang << "----------DATA BARANG MASUK SEBAGAI BERIKUT---------- \n";
    myBarang << " - " << barang.nama << endl;
    myBarang << " - " << barang.banyak << endl;
    myBarang << endl;

    fstream myFile;
    myFile.open("struk.txt",ios::out);
        if(myFile.is_open()){
        myFile << "================================\n";
        myFile << "              NOTA       \n";
        myFile << "================================\n";
        myFile << "No     Barang    Jumlah    Harga   Total \n";
        for (int i =0; i < jumlah_belanja; i++){
            myFile<<i+1<<"\t"<<nama_barang[i]<<"\t  "<<jumlah[i]<<"\t      "<<harga[i]<<"\t"<<total[i]<<endl;
            myFile << endl;
        }

        myFile << "Jumlah Belanjaan : " << jumlah_belanja << endl;
        for(int i=0; i < jumlah_belanja; i++){
        myFile << "Nama Barang    : " << nama_barang[i] << endl;
        myFile << "Jumlah Barang   : " << jumlah[i] << endl;
        myFile << "Harga Barang   : " << harga[i] << endl;
        myFile << endl;
        }
        myFile << "===================================\n";
        myFile << "Jumlah Bayar   : Rp." << total_harga << endl;
        myFile << "Total Bayar    : Rp." << total_harga << endl;
        myFile << "Bayar          : Rp." << bayar << endl;;

        myFile << "Kembalian      : Rp." << (bayar-(total_harga)) << endl;
        myFile << "===================================\n";
        myFile << "           TERIMAKASIH             \n";
        myFile << "         ===============           \n";
        }
        cout << endl;
    return 0;
}

}


//ini adalah komentar