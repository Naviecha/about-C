#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;
struct{
   string nama;
   int jumlah,kode;
   long int tot_bay; 
   
} barang[10];
  
   int pilihan,i,x,y,jmldata; 
   long int jmlbayar;
   char jwb;
      
void input_beli()
{
i=0;
do{
i++;
system("cls");

cout<<"      DAFTAR NAMA BARANG"<<endl;
cout<<"------------------------------"<<endl;
cout<<"kode   nama barang    harga"<<endl;
cout<<"------------------------------"<<endl;
cout<<" 1     Laptop        6.000.000"<<endl;
cout<<" 2     Netbook       3.000.000"<<endl;
cout<<" 3     Ultrabook    10.000.000"<<endl;
cout<<"------------------------------"<<endl;
cout<<" masukan nama pembeli = ";cin>>barang[i].nama;
cout<<" kode barang [1,2,3] = ";cin>>barang[i].kode;
cout<<""<<endl;
if(barang[i].kode==1)
 {
 cout<<"    Nama Pembeli  : "<<barang[i].nama<<endl;
 cout<<"    Kode Item     : 1"<<endl;
 cout<<"    Nama Item     : Laptop"<<endl;
 cout<<"    Harga Per PCs : 6.000.000"<<endl;
 cout<<"    Jumlah Beli   : ";cin>>barang[i].jumlah;
 cout<<"    ===================="<<endl;
 cout<<"       Total      : "<<barang[i].jumlah*6000000<<endl;
 barang[i].tot_bay=barang[i].jumlah*6000000;
 cout<<"    jumlah bayar  : ";cin>>jmlbayar;
     if (jmlbayar>=barang[i].tot_bay){
      cout<<"    uang kembali  : "<<jmlbayar-barang[i].tot_bay<<endl;
     }
     else if(jmlbayar<barang[i].tot_bay){
      cout<<"\n     UANG ANDA KURANG!!!"<<endl;
     }
 }
else if(barang[i].kode==2)
 {
 cout<<"    Nama Pembeli  : " <<barang[i].nama<<endl;
 cout<<"    Kode Item     : 2 "<<endl;
 cout<<"    Nama Item     : Netbook "<<endl;
 cout<<"    Harga Per PCs : 3.000.000"<<endl;
 cout<<"    Jumlah Beli   : ";cin>>barang[i].jumlah;
 cout<<"    ===================="<<endl;
 cout<<"       Total      : "<<barang[i].jumlah*3000000<<endl;
 barang[i].tot_bay=barang[i].jumlah*3000000;
 cout<<"    jumlah bayar  : ";cin>>jmlbayar; 
      if (jmlbayar>=barang[i].tot_bay){
      cout<<"    uang kembali  : "<<jmlbayar-barang[i].tot_bay<<endl;
      }
      else if(jmlbayar<barang[i].tot_bay){
      cout<<"\n     UANG ANDA KURANG!!!"<<endl;
      }
 }
else if(barang[i].kode==3)
 {
 cout<<"    Nama Pembeli  : " <<barang[i].nama<<endl;
 cout<<"    Kode Item     : 3 "<<endl;
 cout<<"    Nama Item     : Ultrabook"<<endl;
 cout<<"    Harga Per PCs : 10.000.000"<<endl;
 cout<<"    Jumlah Beli   : ";cin>>barang[i].jumlah;
 cout<<"    ===================="<<endl;
 cout<<"        Total     : " <<barang[i].jumlah*10000000<<endl;
 barang[i].tot_bay=barang[i].jumlah*10000000;
 cout<<"    jumlah bayar  : ";cin>>jmlbayar;
     if (jmlbayar>=barang[i].tot_bay){
     cout<<"    uang kembali  : "<<jmlbayar-barang[i].tot_bay<<endl;
     }
     else if(jmlbayar<barang[i].tot_bay){
     cout<<"\n     UANG ANDA KURANG!!!"<<endl;
     }
 }
 else {
 cout<< "        SALAH KODE!!!"<<endl;
 }
 cout<<"    ===================="<<endl;     

do{
cout<<" tambah barang lagi? [y/n]= ";cin>>jwb;
}while ((jwb!='y') && (jwb!='n'));

}while ((jwb=='y')||(jwb=='Y'));
jmldata=i;
}

void tampil(){
 cout<<" DATA KE "<<i<<endl;
 cout<<" nama        : "<<barang[i].nama<<endl;
 cout<<" kode        : "<<barang[i].kode<<endl;
 cout<<" jumlah beli : "<<barang[i].jumlah<<endl;
 cout<<" total bayar : "<<barang[i].tot_bay<<endl;
}

void menu(){
 system("cls");
 cout<<" ====================="<<endl;
 cout<<"     MENU AWAL"<<endl;
 cout<<" ====================="<<endl;
 cout<<" 1. input data"<<endl;
 cout<<" 2. tampil data"<<endl; 
 cout<<" 3. cari data"<<endl;
 cout<<" 4. urut data"<<endl;
 cout<<" 5. keluar"<<endl;
 cout<<" ====================="<<endl;
 cout<<" pilihan anda [1,2,3,4,5] = ";cin>>pilihan;
}


void output_beli(){
 system("cls");
 cout<<" ===================================="<<endl;
 cout<<"             DATA TRANSAKSI"<<endl;
 for(i=1;i<=jmldata;i++){
 cout<<" ===================================="<<endl;     
 tampil();
 }
 system("pause");
}
void cari_data(){
 system("cls");
 string cari;
 i=1;

 cout<<"masukan nama yang dicari = ";cin>>cari;
 while((barang[i].nama!=cari)&&(i<=jmldata)){
     i++;                                   
 }
 if (barang[i].nama==cari) {
    tampil();
 }else{
     cout<<"data tidak ditemukan"<<endl;
 }
 system("pause");
 }
 
void urut_data(){

 string tempstring;
 int tempint;
 float tempfloat;     
     
 for(x=1;x<=jmldata-1;x++){                       
 for (y=jmldata;y>=x+1;y--){
    if (barang[y].kode<barang[y-1].kode){
        
        tempstring= barang[y].nama;
        barang[y].nama=barang[y-1].nama ;
        barang[y-1].nama = tempstring;
        
        tempint= barang[y].kode;
        barang[y].kode=barang[y-1].kode;
        barang[y-1].kode = tempint;
        
        tempint= barang[y].jumlah;
        barang[y].jumlah=barang[y-1].jumlah;
        barang[y-1].jumlah = tempint;
        
        tempint= barang[y].tot_bay;
        barang[y].tot_bay=barang[y-1].tot_bay;
        barang[y-1].tot_bay = tempint;        
        }
 }
 }
 cout<<"data sudah diurutkan"<<endl;
 system("pause");
}

int main()
{
do  {
    menu();
    if (pilihan==1) {
         input_beli();
   }else if (pilihan==2){
         output_beli();
   }else if  (pilihan==3){
         cari_data();
   }else if  (pilihan==4) {
         urut_data();
   }else if  (pilihan==5) {   
   }else{
         cout<<"anda salah input"<<endl;
         system("pause");
   }      
}while (pilihan!=5);
    system("PAUSE");
    return EXIT_SUCCESS;
}
