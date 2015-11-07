#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

main()
{
    char *nm_mkn,*nm_mnm,kd_paket,pilihan2,nampel[15];
    float jum_bel,harga,bayar,kembalian,total,ppn,tobar;
awal:
    system("cls");

    cout << "\t\t    RUMAH MAKAN ARTO MORO \n";
    cout << "\t\t        Jl. TMB No. 67\n";
    cout << "--------------------------------------------------------------\n";
    cout << "|Paket|    MENU MAKANAN     |    MENU MUNUMAN  |    HARGA    |\n";
    cout << "--------------------------------------------------------------\n";
    cout << "| A   |   Bakso Meteor      |  Jus Alpukat     | RP. 17.000  |\n";
    cout << "| B   |   Mie Ayam          |  Tebs            | Rp. 12.000  |\n";
    cout << "| C   |   Nasi Goreng       |  Es Jeruk        | RP. 13.000  |\n";
    cout << "| D   |   Nasi Campur       |  Es Teh Manis    | Rp. 15.000  |\n";
    cout << "| E   |   Sate Ayam+Lontong |  Teh Panas       | RP. 18.000  |\n";
    cout << "--------------------------------------------------------------\n\n";


    cout << "\t=======================================\n";
    cout << "\t|       RUMAH MAKAN ARTO MORO         |\n";
    cout << "\t|        Jl. TMB No. 69               |\n";
    cout << "\t=======================================\n\n\n";
paket:
    cout << " Tanggal Transaksi : ";
    cin >> nampel;
    cout << " Nama Paket [A/B/C/D/E] : ";
    cin >> kd_paket;
    cout << " Jumlah Qt   : ";
    cin >> jum_bel;
    cout << "\t--------------------------------------------\n";

    if (kd_paket=='A' || kd_paket=='a')
    {
        nm_mkn="Bakso Meteor";
        nm_mnm="Jus Alpukat";
        harga=17000;
    }
    else if (kd_paket=='B' || kd_paket=='b')
    {
        nm_mkn="Mie Ayam";
        nm_mnm="Tebs";
        harga=12000;
    }
    else if (kd_paket=='C' || kd_paket=='c')
    {
        nm_mkn="Nasi Goreng";
        nm_mnm="Es Jeruk";
        harga=13000;
    }
    else if (kd_paket=='D' || kd_paket=='d')
    {
        nm_mkn="Nasi Campur";
        nm_mnm="Es Teh Manis";
        harga=15000;
    }
    else if (kd_paket=='E' || kd_paket=='e')
    {
        nm_mkn="Sate Ayam+Lontong";
        nm_mnm="Teh Panas";
        harga=18000;
    }
    else
    {
        cout << "\t| Masukkan Paket Sesuai Pilihan di atas !! |"<<endl;
        cout << "\t--------------------------------------------\n";
        getche ();
        goto paket;
    }

    system("cls");
    cout	<< "=========================================\n";
    cout	<< "|        RUMAH MAKAN ARTO MORO          |\n";
    cout	<< "|            Jl. TMB No. 69             |\n";
    cout	<< "=========================================\n";
    cout	<< "Nama Makanan : "<<nm_mkn<<"\n";
    cout	<< "Nama Minuman : "<<nm_mnm<<"\n";
    cout    << "Jumlah Qt    : "<<jum_bel<<"\n";
    cout	<< "Harga        : Rp "<<harga<<"\n";
    cout	<< "_________________________________________\n";

    total=jum_bel*harga;
    ppn=0.10*total;
    tobar=total+ppn;

    cout << "Sub Total    : Rp "<<total<<"\n";
    cout << "PPN          : Rp "<<ppn<<"\n";
    cout << "_________________________________________\n";
bayar:
    cout << "Grand Total  : Rp "<<tobar<<"\n";
    cout << "Payment/Cash : Rp ";
    cin >> bayar; "\n";
    if (bayar < tobar)
    {
        cout << "_________________________________________\n";
        cout << "\tMaaf, Uang Anda Kurang !!!"<<endl;
        cout << "_________________________________________\n";
        getche();
        goto bayar;
    }
    cout << "_________________________________________\n";
    kembalian=bayar-tobar;
    cout << "Kembalian    : Rp "<<kembalian<<"\n";
    cout << endl;
    cout << "=========================================\n";
    cout << endl;
    cout << "TERIMA KASIH LAIN KALI DATANG LAGI YA\n";
    cout << endl;

    ofstream fileteks;
    fileteks.open("D:/Transaksi.txt", ios::app);
    fileteks <<"Tanggal Transaksi  : "<<nampel<<endl;
    fileteks <<"Nama Makanan       : "<<nm_mkn<<endl;
    fileteks <<"Nama Minuman       : "<<nm_mnm<<endl;
    fileteks <<"Jumlah Qty         : "<<jum_bel<<endl;
    fileteks <<"Subtotal           : Rp. "<<total<<endl;
    fileteks <<"PPN                : Rp. "<<ppn<<endl;
    fileteks <<"Grand Total        : Rp. "<<tobar<<endl;
    fileteks <<"======================================"<<endl;
    fileteks.close();
    {
        cout << "=========================================\n";
        cout << "\nApakah Anda Mau Kembali Ke Awal ? [Y/N] : ";
        cin >> pilihan2;

        switch(pilihan2)
        {
        case 'Y':
        case 'y' :
            goto awal;

        case'N':
        case 'n' :
            system("cls");
            cout << endl << endl;
            cout << "\t\t-=TERIMA KASIH ANDA TELAH MENGGUNAKAN SOFTWARE INI=-";
            cout << "\n\n\nTekan Enter Untuk Keluar . . . !";
            getche();

        default:
            cout << "Inputkan Pilihan dengan Benar !!!";
            getche();
        }
        return 0;
    }

    getch();
}
