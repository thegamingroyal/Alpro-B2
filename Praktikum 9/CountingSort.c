// Nama File 	 : CountingSort
// Deskripsi 	 : Membangun sebuah program yang dapat mengurutkan bilangan integer dengan counting sort
// Pembuat   	 : 24060121140144 - Aditya Arif Setiawan
// Tgl Pembuatan : Rabu, 27 April 2022

void CountingSort(int T[], int N)
{
 int i, j, temp, idx;
 for(i = 0; i < (N-1); i++)
    {
     idx = i;
     for(j = i+1; j < N; j++)
        {
         if(T[j] < T[idx])
         {
          idx = j;
         }
        }
        temp = T[i];
        T[i] = T[idx];
        T[idx] = temp;
    }
}

// Program Utama
int main()
{
    // Kamus
    int T[100], N, i;
    // Algoritma
    printf("Counting Sort \n");
    printf("Ketik banyak elemen yang ingin dimasukkan = ");
    scanf("%d", &N);
    printf("Ketik nilai yang ingin dimasukkan : \n");
    for(i = 0; i < N; i++)
    {
     scanf("%d", &T[i]);
    }
    // Memanggil Sub Program
    CountingSort(T, N);
    printf("Hasil pengurutan : \n");
    for(i = 0; i < N; i++)
    {
     printf("%d ", T[i]);
    }
}
