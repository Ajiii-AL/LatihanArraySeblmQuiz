#include <stdio.h>

int main(){

    const int nMax = 100;
    int n;
    int i;
    int array[nMax + 1];
    float kehadiran = 0;
    float tidakHadir = 0;
    float persen;
    

    printf("masukkan jumlah mahasiswa : ");
    scanf("%d", &n);

    printf("isi kehadiran siswa : \n");
    for(i = 1; i <= n; i++){
        printf("siswa ke-%d : ", i);
        scanf("%d", &array[i]);
        
        if(array[i] == 1){
            kehadiran++;
        }else{
            tidakHadir++;         
        }
        persen = (kehadiran / n ) * 100;

    }

    printf("=== REKAP ABSENSI === \n");
    for(i = 1; i <= n; i++){
        printf("siswa ke-%d : %s\n", i, array[i] == 1 ? "hadir" : "tidak khadir");
    }
    printf("Jumlah mahasiswa hadir : %.0f \n", kehadiran);
    printf("Jumlah mahasiswa tidak hadir : %.0f \n", tidakHadir);
    printf("Persentase kehadiran : %.0f%%", persen);

    return 0;
}