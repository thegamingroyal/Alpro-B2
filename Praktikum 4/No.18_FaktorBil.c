/*Nama File 	: No.18_FaktorBil*/
/*Deskripsi 	: Membuat teks algoritma untuk menentukan faktor-faktor bilangan dari bilangan integer sembarang N (N>0) yang dimasukan melalui keyboard*/
/*Pembuat   	: 24060121140144 - Aditya Arif Setiawan*/
/*Tgl Pembuatan	: Sabtu, 19 Maret 2022*/

# include<stdio.h>
int main()
{
 //kamus
    int N;
    int i;
 //algoritma
   printf("Program untuk menentukan faktor dari beberapa bilangan sembarang\n");
   printf("Ketiklah angka yang akan di cek faktornya = ");
   scanf("%d",&N);
   if(N < 0)
   {
    printf("Angka yang dimasukkan harus bernilai positif!");
   }
    else if(N > 0)
    {
       i = 1;
       for(i = 1; i <= N; i++)
      {
       if (N % i == 0)
        {
         printf(" | %d",i);
        }
      }
    }
    else
    {
     //{N = 0}
     printf("Faktor dari 0 adalah 0");
    }
    return 0;
}
