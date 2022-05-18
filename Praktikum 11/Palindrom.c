//Nama File 	: Palindrom.c
//Deskripsi 	: Menentukan susunan karakter pada pita karakter tersebut palindrom atau bukan
//Pembuat   	: Aditya Arif Setiawan - 24060121140144
//Tgl Pembuatan	: Rabu, 18 Mei 2022

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main()
{
    //Kamus
    char str[100];
    int i, len, temp = 0;
    int flag = 0;
    len = strlen(str);

    //Algoritma
    len = HitungChar();

    printf("===Palindrom===\n");

    if (len >= 100 )
    {
     printf("\nKarakter pada pita hanya sebatas 100 (termasuk titik)\n");
    }
    else
    {
     START();
     i = 0;
     while(!EOP())
     {
      str[i] = CC;
      ADV();
      i++;
     }

     printf("\nPembacaan pita = ");
     for ( i = 0; i < len; i++)
     {
      printf("%c", str[i]);
     }

     for(i=0;i < len ;i++)
     {
     if(str[i] != str[len-i-1])
      {
       temp = 1;
       break;
      }
     }

     if (temp == 0)
     {
      printf("\nPalindrom\n");
     }
     else
     {
      printf("\nBukan palindrom\n");
     }
    getch();
    return 0;
    }
}
