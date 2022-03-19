/*Nama File 	: No.16_TunjAnak*/
/*Deskripsi 	: Menentukan besar tunjangan anak yang diberikan, lalu tampilkan besar tunjangan anak tersebut.*/
/*Pembuat   	: 24060121140144 - Aditya Arif Setiawan*/
/*Tgl Pembuatan	: Sabtu, 19 Maret 2022*/

# include<stdio.h>
int main()
{
 //kamus
   int a,g,hasil;
 //algoritma
   printf("Program untuk menentukan tunjangan anak yang diberikan\n");
   printf("Ketiklah berapa jumlah anak yang diberikan = ");
   scanf("%d", &a);
   printf("Ketiklah besar gaji pokok = ");
   scanf("%d", &g);

 if (a >= 0 && a < 3)
    {
     hasil = a * (0.1 * g);
     printf("Tunjangan anak yang diberikan = %d",hasil);
    }
    else if (a >= 3)
    {
     hasil = 3 * (0.1 * g);
     printf("Tunjangan anak yang diberikan = %d",hasil);
    }
    else
    {
     //(a<0)
     printf("Jumlah anak yang anda masukkan tidak dapat ditemukan!");
    }
    return 0;
}
