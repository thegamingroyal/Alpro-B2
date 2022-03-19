/*Nama File 	: No.17_TarifPLN*/
/*Deskripsi 	: Menentukan besar tarif listrik yang telah dikenakan, lalu tampilkan besar tarif listrik tersebut*/
/*Pembuat   	: 24060121140144 - Aditya Arif Setiawan*/
/*Tgl Pembuatan	: Sabtu, 11 Maret 2022*/

# include<stdio.h>
int main()
{
 //kamus
   int d,g,hasil;
 //algoritma
   printf("Program untuk menentukan tarif listrik yang telah dikenakan\n");
   printf("Ketiklah jumlah daya listrik yang telah digunakan /kWh =  ");
   scanf("%d", &d);
   printf("Ketiklah golongan 1 atau 2 = ");
   scanf("%d", &g);

 if (g == 1)
    {
    if (d < 100)
        {
         hasil = 100 * 1000;
         printf("Biaya yang harus anda bayar = %d", hasil);
        }
        else
        {
         //d>=100
         hasil = (d * 1000) + 0.1 *(d * 1000);
         printf("Biaya yang harus anda bayar = %d", hasil);
        }
    }
    else if (g == 2)
    {
     if (d < 100)
        {
         hasil = 100 * 2000;
         printf("Biaya yang harus anda bayar = %d", hasil);
        }
        else
        {
         //d>= 100
         hasil = (d * 2000) + 0.1*(d * 2000);
         printf("Biaya yang harus anda bayar = %d", hasil);
        }
    }
    else
    {
     printf("Golongan yang anda masukkan tidak ditemukan!");
    }
    return 0;
}
