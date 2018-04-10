#include <stdio.h>
#include <stdlib.h>
//kod burda calısmıyor ama codeblock da calısıyor
int main() {
  int sayi1,sayi2;   //--> iki tane 4 byte lık yer ayrıldı
  printf("ilk sayi giriniz: ");
  scanf("%d",&sayi1);
  printf("ikinci sayi: ");
  scanf("%d",&sayi2);
  printf("ilk sayi: %d ve ikinci sayi %d dir",sayi1,sayi2);
  printf("bu iki sayi \n\n");

  if (sayi1==sayi2)
    printf("%d esittir %d ye",sayi1,sayi2);
  if (sayi1!=sayi2)
    printf("%d esit degildir %d ye",sayi1,sayi2);
  if (sayi1>sayi2)
    printf("%d buyuktur %d ye",sayi1,sayi2);

  return 0;


}

