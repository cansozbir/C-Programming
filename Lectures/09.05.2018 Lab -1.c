#include <stdio.h>
#include <stdlib.h>

/* Veri teipleri

    ---> Temel
        int
        char
        double
    ---> Türetilmiş
        array
        pointer
        string
        enum
*/


int main()
{
    /// string elde etmek için 1. yöntem
    printf("merhaba...");
    /// 2. arrayler ile
    char metin[20]="hello";
    char metin2[30]={'o','l','a'};   ///böyle de atanabilir
    char metin3[]="bonjour";    /// '\0' eger boyut belirtmediysek

    printf("\n %s\n",metin2);
    printf(metin3);

    printf("\n\n %d",sizeof(metin3));
    printf("\n %d",strlen(metin3)); /// bu fonksiyon stringlere özel

    ///   [ c ]  [ a ]  [ n ] [ \0 ]  --- ben can da versem sonuna \0 koydugu icin size ına baktıgımızda 3 degil 4 degeri veriyor

    char str[10];
    printf("\nadiniz : ");
    scanf("%s",str);
    int i;
    for(i=0 ; i</*sizeof(str) önce bunu yazdı sonra strlene çevırdı*/strlen(str); i++)
        printf("dizi [%d] icerigi : %c\n",i,str[i]);


    /// 3. pointer

    char*soyadP;
    soyadP="Sozbir";

    printf("\n\n%c",*soyadP);
    printf("\n\n%c",*(soyadP+1));  ///sirayla pointerı arttirdikca kelimenin diger harfini yazdiracak

    printf("\nAdres : %p",soyadP);   ///hexadecimal bastırır
    printf("\nAdres : %d\n",soyadP+1);   /// decimal bastırır

    printf(soyadP);
    printf("\n");








    return 0;
}
