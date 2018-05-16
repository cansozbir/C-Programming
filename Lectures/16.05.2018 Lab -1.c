#include <stdio.h>
#include <stdlib.h>

enum renkler  /// enum içerisinde degisken degil sabitleri tutuyorun
{
    mavi,sari,kirmizi
    ///pzt,sali,crs gibi bunlar sabittir deger atanmaz
}pixel3; ///typedefsiz pixel3 ü renkler tipinde tanımlamıs oluyoruz yanı degıskenı globalde yarattık

typedef enum  /// enum içerisinde degisken degil sabitleri tutuyorun
{
    mavi2,sari2,kirmizi2
    ///pzt,sali,crs gibi bunlar sabittir deger atanmaz
}renkler2;

int main()
{
    int x=5;            ///int x degiskeni
    ///bu typdedefsiz olan icin enum renkler pixel; ///renkler pixel degiskeni
     pixel=sari;

    enum renkler2 pixel2=mavi ;
    if (pixel==sari)
        printf("pixel saridir...");
    else if (pixel2==mavi)
        printf("\npixel mavidir");


    return 0;
}
