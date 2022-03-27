/*Nama File 	: No.19_CekPrima*/
/*Deskripsi 	: Untuk menentukan apakah bilangan tersebut adalah bilangan prima*/
/*Pembuat   	: 24060121140144 - Aditya Arif Setiawan*/
/*Tgl Pembuatan	: Minggu, 27 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 // Kamus
    int N,i,checker;
 // Algoritma
    checker = 0;
    printf("Ketiklah bilangan prima yang ingin dimasukkan !");
    scanf("%d",& N);
    for(i = 2; i <= (sqrt(N)); i++)
    {
     if (N % i == 0)
        {
         checker = 1;
         break;
        }
    }
    if(checker == 1)
    {
     printf("Bukan bilangan prima");
    }
    else
    {
     printf("Bilangan prima");
    }
 return 0;
}
