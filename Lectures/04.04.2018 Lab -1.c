#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1=3;
    int a2=5;
    int maliyetDizi[3]={4,6,8};
    float kutleDizi[4]={2.3,5.67,8.9,7.0};
    double fiyatDizi[2];
    fiyatDizi[0]=3.45;
    fiyatDizi[1]=7.89;
    char harfDizi[3]={'a','b','c'};
    char metindizi[20]="selamun aleykum dunya";



    printf("\n %d",maliyetDizi[2]);  ///mesela 5. eleman�n� sorsak 5.eleman� olmamas�na ragmen hata vermeyecek ancak "" karakteri veya rastgele bir�ey verecek

    printf("\n %f",kutleDizi[2]);
    printf("\n %f",fiyatDizi[0]);
    printf("\n %c",harfDizi[1]);
    printf("\n %c",metindizi[0]);

    printf("\n\nboyut maliyet : %d",sizeof (maliyetDizi));  ///haf�za da dizinin ne kadar byte ayr�ld�g�n� verir
    printf("\n\nboyut kutle : %d",sizeof (kutleDizi));
    printf("\n\nboyut fiyat : %d",sizeof (fiyatDizi));
    printf("\n\nboyut harf : %d",sizeof (harfDizi));
    printf("\n\nboyut metin : %d",sizeof (metindizi));

    printf("\n\nHarf dizi eleman sayi : %d\n",sizeof(harfDizi)/sizeof(char)); /// toplam size � bir birimin size �na b�lerek
                                                                         /// eleman say�s�n� g�r�yoruz
    return 0;
}
