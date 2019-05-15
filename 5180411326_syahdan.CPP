#include <iostream> // Untuk menampilan perintah cin, cout, endl
#include <conio.h> // Untuk menampilkan perintah getch, clrscr,
#include <stdio.h> // Untuk menampilkan perintah printf, scanf, gets
#include <stdlib.h> // Untuk menampilkan perintah atof, atoi, pow
#include <string.h> // Untuk menampilkan perintah strcmp


void garis(){
                cout<<" \t====================================================== \n";} //Menggunakan modular fungsi void
                int main(){
                char user[20], pass[4], status; //Tipe data char user 20 karakter, password 4 karakter, status tidak dibatasi
                int balik; //Tipe data integer
                int a, b, c, d, e, f, j, k, i; //Tipe data integer
                int pil; //Tipe data integer

                //struct untuk menggabungkan beberapa data dengan tipe data yang berbeda
                struct pasien{
                                int kodeP;
                                char nama[30];
                                int tanggal;

                }z[100];

                struct poli{
                                int kodePo;
                                char namaP[50];
                                char dokter[20];
                } y[100];

                struct transaksi{
                                int nopjm;
                                int kPo;
                                int kP;
                                char tglP[20];
                } x[100];
                c=0;
                e=0;

                garis(); //Memanggil fungsi garis()
                cout<<" \tSelamatDatang Di Aplikasi Rumah sakit \n";
                garis(); //Memanggil fungsi garis()
                cout<<endl;
                atas:
                cout<<" Silakan Login terlebih dahulu \n";
                cout<<" Username : "; cin>>user;
                cout<<" Password : "; cin>>pass;
                if(strcmp(pass,"1234")==0) {  //Fungsi percabangan default pass 1234
                                cout<<" User Berhasil Login\n";
                                garis(); //Memanggil fungsi garis()
                                cout<<endl;
                                system("cls"); //clearscreen

                }else{
                                cout<< "Password Salah\n";
                                cout<<endl;
                                goto atas;
                }
                //Menampilkan Menu pilihan
menu:
                garis(); //Memanggil fungsi garis()
                cout<<" \t\tPilihan Menu Peminjaman\n";
                cout<<" 1. Input Data Pasien\n";
                cout<<" 2. Data Poli\n";
                cout<<" 3. Transaksi\n";
                cout<<" 88. Keluar\n";
                cout<<" Masukan Pilihan Anda : "; cin>>pil; //Memasukkan pilihan
                system("cls"); //clears creen
                switch(pil){ //Fungsi switch untuk memilih
                case 1:
                                goto pasien; //Menuju ke Input Data Buku
                                break;

                 case 2:
                 						goto poli;
                                 break;

                case 3:
                                goto transaksi; //Menuju ke Peminjaman Buku
                                break;


                case 88:
                                cout<<" Terimakasih Telah menggunakan aplikasi ini\n";
                                cout<<endl;
                                goto end; //Keluar Dari Program
                                break;
                default:
                                cout<<" Pilihan tidak tersedia\n";
                                cout<<endl;
                                goto menu; //Menuju ke Menu Awal
                                break;
                }
//input data buku
input:
                                cout<<" Masukan Banyaknya pasien yang akan diinputkan : "; cin>>a;
                                for(b=0; b<a; b++){ //nilai awal 0, kurang dari nilai input a, bertambah sampai max nilai a
                                                cout<<" Masukan data pasien ke- "<<b<<endl; //Bertambah 1 jika menambah inputan
                                                cout<<" Kode pasien\t ";
                                                cin>>z[b].kodeP;  //Input Kode Buku
                                                cout<<" Nama Pasien\t ";
                                                cin>>z[b].nama;
                                                cout<<" Tanggal\t ";
                                                cin>>z[b].tanggal; //Input Jumlah Buku
                                                cout<<endl;
                                }
                                system("cls"); //clear screen
                                goto menu; //Menuju ke Menu Awal
//Menampilkan daftar Buku
pasien:
                garis(); //Memanggil Fungsi garis ()
                cout<<" ======================Daftar Pasien=====================\n";
                garis(); //Memanggil Fungsi garis ()
                cout<<" | Kode Pasien\t| Nama Pasien | Tanggal | \n";
                garis(); //Memanggil Fungsi garis ()
                for(b=0; b<a; b++){ //nilai awal 0, kurang dari nilai input a, bertambah sampai max nilai a
                                cout<<" |\t"<<z[b].kodeP<< "\t| "<<z[b].nama<<"\t\t|\t" <<z[b].tanggal<<endl;
                }
                garis(); //Memanggil Fungsi garis ()
                cout<<endl;
                goto menu; //Menuju ke Menu Awal

//rekap data
transaksi:
                                cout<<endl;
                                for(j=0; j<e; j++){ //nilai awal j adalah 0, terus bertambah hingga max kurang dari e
                                                cout<<" Nomor Transaksi : "<<x[j].nopjm<<endl; //Menampilkan Kode Peminjaman
                                                cout<<" Kode Pasien : "<<x[j].kP<<endl; //Menampilkan Kode Peminjam
                                                for(i=0; i<k; i++){ //nilai i awal 0, terus bertambah sampai max kurang dari k
                                                                if(y[i].kodePo==x[j].kP){ //Jika kode peminjam tersimpan dalam memori maka
                                                                                cout<<" Nama Pasien : "<<y[i].namaP<<endl; //Menampilkan Nama Peminjam sesuai kode peminjam
                                                                }
                                                }
                                                cout<<" Kode Poli : "<<x[j].kPo<<endl; //Menampilkan Kode Buku
                                                for(b=0; b<a; b++){ //nilai awal b adalah 0, terus bertambah hingga kurang dari a
                                                                if(z[b].kodeP==x[j].kPo){ //Jika Kode Buku ada dalam memori maka
                                                                                cout<<" Nama Poli : "<<z[b].nama<<endl; //Menampilkan Judul Buku Sesuai dengan Kode Buku
                                                                }
                                                }
                                                cout<<endl;

                                }
                                cout<<"Ingin Kembali Ke Menu Utama? <Y/n>";cin>>status;
                                if(status=='Y'||status=='y'){
                                system("cls"); //clear screen
                                goto menu;}//Menuju ke Menu Awalr
                                else {
                                                goto transaksi;
                                }

end:
                system("pause"); //system program pause
                return 0; //mengembalikan nilai 0 ke sistem menandakan program berjalan dengan baik
}
