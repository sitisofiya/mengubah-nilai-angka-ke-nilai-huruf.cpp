#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int nilai;
    printf("Masukkan nilai ujian anda: ");
    scanf("%d",&nilai);
    if((nilai>100)||(nilai<0))
        printf("Maaf, Masukkan salah!\n nilai diluar jangkauan !!");
    else if(nilai==100) printf("Nilai = A");
    else {
        switch (nilai/10){
        case 9: printf("Nilai = A");
        break;
        case 8: printf("Nilai = B");
        break;
        case 7: printf("Nilai = C");
        break;
        default: printf("Nilai = F");
        break;
        }
    }
    printf ("\n");
    system("PAUSE");
    return 0;
}
