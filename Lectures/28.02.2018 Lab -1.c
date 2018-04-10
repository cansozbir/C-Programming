#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int sayi1,sayi2 ; ///tamsayı 2 byte    %d
  int toplam , fark , bolum,carpim,mod ;
  float s1,s2,bolum2;/// virgüllü sayı          %f
  char kar; /// karakter 1 byte        %c
  char str[10];
  
  printf("ilk sayi :");
  scanf("%d", &sayi1);
  printf("ikinci sayi giriniz :");
  scanf("%d" ,&sayi2);
  printf("girdiginiz sayilar : %d ve %d dir\n",sayi1,sayi2);

  toplam=sayi1+sayi2 ;
  fark = sayi1 - sayi2;
  carpim = sayi1*sayi2;
  mod=sayi1%sayi2;
  bolum =sayi1/sayi2;  /// int olarak bolduk
  ///printf("toplam %d  fark %d  carpim %d  mod %d  bolum %d dir ",toplam,fark,carpim,mod,bolum);
  printf("toplam: %d \n",toplam);
  printf("fark: %d \n",fark);
  printf("mod: %d \n",mod);
  printf("carpim: %d \n",carpim);
  printf("bolum: %d \n",bolum);
  printf("float sayi giriniz: ");
  scanf ("%f",&s1);
  printf("float ikinci sayi giriniz: ");
  scanf ("%f" ,&s2);
  bolum2=s1/s2;     /// float olarak bolduk
  printf("bolum2\t:%f dir\n",bolum2);
  printf("bolum2\t:%.2f dir",bolum2);  /// noktadan sonra 2 basamak yazdı
  

