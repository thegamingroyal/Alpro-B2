/*Nama File 	: No.22_SiputNaik*/
/*Deskripsi 	: Untuk menentukan hari ke berapa siput tersebut bisa naik pada ketinggian N*/
/*Pembuat   	: 24060121140144 - Aditya Arif Setiawan*/
/*Tgl Pembuatan	: Minggu, 27 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
 // Kamus
    int i = 1;
    double h = 0.00, N;
 // Algoritma
    printf("Ketiklah ketinggian siput tersebut berada !");
    scanf("%lf",& N);
    do
    {
     if (i % 2 != 0)
     {
      h = h + 0.3;
     }
     else
     {
      h = h - 0.1;
     }
     i++;
    }
    while (h < N);
    printf("Pada hari ke %d, siput tersebut bisa mencapai pada ketinggian %.2f meter\n",i/2,N);
 return 0;
}
