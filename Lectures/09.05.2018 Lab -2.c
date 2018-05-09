#include <stdio.h>
#include <stdlib.h>
/// Kullanıcidan bir keime ve bir harf isteyip , bu harfin kelimede kaç kez geçtigini (frekansını) bulalım.

int main()
{
    char cumle[1000],harf;
    int i,frekans=0;
    printf("\nMetin giriniz : ");

    ///scanf("%s",cumle); /// & olsa da olur olmasa da olur ve scanf bosluk bırakana kadar alıyor cumlenı !!!!!!!!!
    ///printf(cumle);

    gets(cumle);  /// enter girene kadar metini alır
    puts(cumle);  /// ekrana yazdirir

    printf("\nHarf giriniz : ");
    scanf("%c",&harf);

    for (i=0;cumle[i]!='\0';i++)
    {
        if(harf==cumle[i])
            frekans++;
    }

    printf("\n%c harfinin frekansi %d dir",harf,frekans);





    return 0;
}
