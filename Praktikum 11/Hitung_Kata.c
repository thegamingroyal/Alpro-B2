//Nama File 	: Hitung_Kata.c
//Deskripsi 	: Menentukan dan menunjukkan jumlah kata dari pita karakter
//Pembuat   	: Aditya Arif Setiawan - 24060121140144
//Tgl Pembuatan	: Selasa, 17 Mei 2022

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main()
{
    //Kamus
    char str[100];
  	int i, totalwords;

  	//Algoritma
    printf("===Hitung_Kata===\n");

    if (totalwords >= 100)
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
     for ( i = 0; i < totalwords; i++)
     {
      printf("%c", str[i]);
     }

     i = 0;
     totalwords = 1;
     while(str[i]!='\0')
     {
      if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
      {
       totalwords++;
      }
       i++;
     }
     printf("\nJumlah kata : %d\n", totalwords);
    }
    getch();
	return 0;
}
