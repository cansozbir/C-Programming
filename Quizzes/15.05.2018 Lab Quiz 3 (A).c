#include <stdio.h>
#include <stdlib.h>
// nufus bilgisi verilmiş olsun
// her yıl nufus %0.05 artıyor
// nufusun verilen yılda kaç oldugunu bul
// GLOBAL DEGISKEN YASAK
// MAINDE BASTA NUFUS A , X YILINDA Y OLACAK
// NUFUS HESAPLAMA FONKSIYONUN ICINDE OLACAK VE FONKSIYON VOID OLACAK
/// POINTER TANIMI MAIN ICINDE OLMAZSA DAHA IYI OLUR
void nufusBul ( float *ptr, float guncelTarih, float gelecekTarih);


int main()
{
    float nufus = 100;
    float tarih = 2018;
    float gelecekTarih;

    printf("\nHangi tarihteki nufusu ogrenmek istiyorsunuz?");
    scanf("%f",&gelecekTarih);

    nufusBul(&nufus,tarih,gelecekTarih);

    printf("%f",nufus);

    return 0;
}

void nufusBul ( float *ptr, float guncelTarih, float gelecekTarih)
{
    int i ;
    for (i=0; i<gelecekTarih-guncelTarih; i++)
        *ptr += *ptr * (0.05);
}

