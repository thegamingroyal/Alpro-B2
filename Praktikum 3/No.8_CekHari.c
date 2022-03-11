/*Nama File 	: No.8_CekHari*/
/*Deskripsi 	: Menunjukkan hari-hari yang diinginkan melalui nomor*/
/*Pembuat   	: 24060121140144 - Aditya Arif Setiawan*/
/*Tgl Pembuatan	: Jum'at, 11 Maret 2022*/

#include <stdio.h>

int main()
{
    //Kamus
    int h;

    //Algoritma
    printf("Ketik nomor untuk hari yang diinginkan : ");
    scanf("%d", &h);

    switch (h)
    {
    case 1 :
        printf("Senin");
        break;
    case 2 :
        printf("Selasa");
        break;
    case 3 :
        printf("Rabu");
        break;
    case 4 :
        printf("Kamis");
        break;
    case 5 :
        printf("Jum'at");
        break;
    case 6 :
        printf("Sabtu");
        break;
    case 7 :
        printf("Minggu");
        break;
    default :
        printf("Masukan nomor hari tidak tepat");
    }
    return 0;
}

