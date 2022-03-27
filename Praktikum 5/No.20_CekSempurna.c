/*Nama File 	: No.20_CekSempurna*/
/*Deskripsi 	: Untuk menentukan apakah bilangan tersebut adalah bilangan sempurna*/
/*Pembuat   	: 24060121140144 - Aditya Arif Setiawan*/
/*Tgl Pembuatan	: Minggu, 27 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 // Kamus
    int N,i,sempurna;
 // Algoritma
    sempurna = 0;
    printf("Ketiklah bilangan sempurna yang ingin dimasukkan !");
    scanf("%d",& N);
    for(i = 1; i < N ; i++)
    {
     if (N % i == 0)
     {
      sempurna = sempurna + i;
     }
    }
    if (N == sempurna)
    {
     printf("Bilangan sempurna");
    }
    else
    {
     printf("Bukan bilangan sempurna");
    }
 return 0;
}
