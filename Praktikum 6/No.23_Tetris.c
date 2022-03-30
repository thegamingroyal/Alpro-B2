/*Nama File 	: No.23_Tetris*/
/*Deskripsi 	: Diberikan sebuah integer N > 0 yang dimasukan melalui keyboard, maka  tampilkanlah dilayar susunan karakter ‘*’*/
/*Pembuat   	: 24060121140144 - Aditya Arif Setiawan*/
/*Tgl Pembuatan	: Rabu, 30 Maret 2022*/

#include <stdio.h>
int main()
{
 //Kamus
   int N;
   int i;
   int j;
 //Algoritma
   system("color B");
   printf("Ketiklah nilai N yang ingin dimasukkan = ");
   scanf("%d", &N);
   if (N > 0)
   {
    for(i = 1; i <= N; i++)
    {
     for(j = 1; j <= i; j++)
     {
      printf("* ");
     }
      printf("\n");
    }
   }
   else
   {
    printf("Pastikan bilangan integer melebihi 0 !");
   }
 return 0;
}
