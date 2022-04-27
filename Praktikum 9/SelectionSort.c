// Nama File 	 : SelectionSort
// Deskripsi 	 : Membangun sebuah program yang dapat mengurutkan bilangan integer dengan selection sort
// Pembuat   	 : 24060121140144 - Aditya Arif Setiawan
// Tgl Pembuatan : Rabu, 27 April 2022

#include <stdio.h>

int SelectionSort(int arr[], int n)
{
 int i, j, posisi, swap;
 for(i = 0; i < (n-1); i++)
    {
     posisi = i;
     for (j = i + 1; j < n; j++)
        {
         if(arr[posisi] > arr[j])
         {
          posisi = j;
         }
        }
        if(posisi != i)
        {
         swap = arr[i];
         arr[i] = arr[posisi];
         arr[posisi] = swap;
        }
    }
}

// Program Utama
int main()
{
    // Kamus
    int T[100], N, i;
    // Algoritma
    printf("Selection Sort \n");
    printf("Ketik banyak elemen yang ingin dimasukkan = ");
    scanf("%d", &N);
    printf("Ketik nilai yang ingin dimasukkan : \n");
    for(i = 0; i < N; i++)
    {
     scanf("%d", &T[i]);
    }
    // Memanggil Sub Program
    SelectionSort(T, N);
    printf("Hasil pengurutan : \n");
    for(i = 0; i < N; i++)
    {
     printf("%d ", T[i]);
    }
}
