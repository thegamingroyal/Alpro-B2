/*Nama File 	: No.9_CekBulan*/
/*Deskripsi 	: Menunjukkan bulan-bulan yang diinginkan melalui nomor*/
/*Pembuat   	: 24060121140144 - Aditya Arif Setiawan*/
/*Tgl Pembuatan	: Jum'at, 11 Maret 2022*/

#include <stdio.h>

int main()
{
    //Kamus
    int b;

    //Algoritma
    printf("Ketik nomor untuk bulan yang diinginkan : ");
    scanf("%d", &b);

    switch (b)
    {
    case 1 :
        printf("Januari");
        break;
    case 2 :
        printf("Februari");
        break;
    case 3 :
        printf("Maret");
        break;
    case 4 :
        printf("April");
        break;
    case 5 :
        printf("Mei");
        break;
    case 6 :
        printf("Juni");
        break;
    case 7 :
        printf("Juli");
        break;
    case 8 :
        printf("Agustus");
        break;
    case 9 :
        printf("September");
        break;
    case 10 :
        printf("Oktober");
        break;
    case 11 :
        printf("November");
        break;
    case 12 :
        printf("Desember");
        break;
    default :
        printf("Masukan nomor bulan tidak tepat");
    }
    return 0;
}
