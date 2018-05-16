#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char adi[50];
    char yazar[50];
    int id;
}kitap;
/*
-----------------------------
char ad     |char ad
------------------------------      ... Şeklinde bir dizi yapacagız
char soyad  |char soyad
------------------------------
int id      |int id
-----------------------------
Kitap1      |Kitap 2
-------------------------------
*/

int main()
{
    kitap k1,k2,k3;
    kitap kListe[5];
    int i,degisecek;
    for(i=0;i<5;i++)
    {
        printf("kitap bilgilerini giriniz ad-yazar-id :");
        scanf("%s%s%d",&kListe[i].adi,&kListe[i].yazar,&kListe[i].id);
    }
    kitapListele(kListe);
    printf("\nYazarını degistirmek istediginiz kitabın id'si? :");
    scanf("%d",&degisecek);

    for (i=0;i<5;i++)
        if(kListe[i].id==degisecek)
            ///kitapDegistir(kListe[i]);       call by value
            kitapDegistir2(&kListe[i]);     ///call by reference
    kitapListele(kListe);
    return 0;
}

void kitapListele (kitap liste[])
{
    printf("\nAD\tYAZAR\tID");
    int i;
    for(i=0;i<5;i++)
    {

        printf("\n%s\t%s\t%d",liste[i].adi,liste[i].yazar,liste[i].id);
    }
}

void kitapDegistir(kitap ktp)   ///fonksiyon call by value oldugu için hiç çalışmamış gibi değişiklik yapmıyor kitapda
{
    printf("\nYeni yazar giriniz: ");
    scanf("%s",ktp.yazar);
}

void kitapDegistir2(kitap *ktp)  ///call by reference oldugundan kalıcı bir degisiklik yapılıyor
{
    printf("\nYeni yazar giriniz: ");
    scanf("%s",ktp->yazar);
}
