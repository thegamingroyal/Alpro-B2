//Nama File 	: Inverse_Pita.c
//Deskripsi 	: Menunjukkan kalimat pada sebuah pita dalam keadaan terbalik
//Pembuat   	: Aditya Arif Setiawan - 24060121140144
//Tgl Pembuatan	: Selasa, 17 Mei 2022

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main()
{
    //Kamus
    int length_Pita;
    char str[100];
    int i;

    //Algoritma
    length_Pita = HitungChar();

    printf("===Inverse_Pita===\n");

    if (length_Pita >= 100)
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

     printf("\nPembacaan pita : ");
     for (int i = 0; i < length_Pita; i++)
     {
      printf("%c", str[i]);
     }

     printf("\nInverse pada pita : ");
     for (int i = length_Pita-1; i >= 0; i--)
     {
      printf("%c", str[i]);
     }
    }
    getch();
    return 0;
}
