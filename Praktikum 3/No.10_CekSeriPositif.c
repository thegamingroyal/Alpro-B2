/*Nama File 	: No.10_CekSeriPositif.c*/
/*Deskripsi 	: Menunjukkan nilai-nilai kebenaran apakah masukkan bernilai positif atau negatif, jika mendapatkan positif maka akan munculnya hasil total penjumlahan ketiga tahanan*/
/*Pembuat   	: 24060121140144 - Aditya Arif Setiawan*/
/*Tgl Pembuatan	: Jum'at, 11 Maret 2022*/

#include <stdio.h>

int main()
{

    //Kamus
    float t1,t2,t3,total;

    //Algoritma
    printf("Cek Seri Positif\n");
    printf("Masukan bilangan : ");
    scanf("%f", &t1);
    printf("Masukan bilangan : ");
    scanf("%f", &t2);
    printf("Masukan bilangan : ");
    scanf("%f", &t3);
    if (t1 >= 0 && t2 >= 0 && t3 >= 0)
    {
        total = t1 + t2 + t3;
        printf("Sehingga total tahanan jika disusun seri = %.2f\n",total);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }

}
