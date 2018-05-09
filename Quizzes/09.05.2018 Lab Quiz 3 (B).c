#include <stdio.h>
#include <stdlib.h>
/// iki sayiyi fonksiyonla yer degistir ve global degisken yok
/// mainde hem once yazdirin hem sonra yazdirin.

void DegisTokus(int *adres1 , int *adres2);

int main()
{
    int sayi1=123;
    int sayi2=456;

    printf("once sayi1 : %d\n",sayi1);
    printf("once sayi2 : %d\n",sayi2);

    DegisTokus(&sayi1,&sayi2);

    printf("sonra sayi1 :%d\n",sayi1);
    printf("sonra sayi2 :%d\n",sayi2);

    return 0;
}

void DegisTokus(int *adres1 , int *adres2)
{
    int temp;
    temp = *adres1;
    *adres1 = *adres2;
    *adres2 = temp;
}
