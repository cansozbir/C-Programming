#include "stdio.h"
#include<stdlib.h>
#include <time.h>
///tahmin oyunu yapacagiz tahmin>rastgele sayi ise assagi yukarı seklinde yönlendirmeler yapacagız . tahmin =rastgelesayı ise bildiniz!


int main() {
  int sayi,tahmin=0;
  ///sayi=rand() /// -32 binle +32 bin arasında bir sayı alıyor rastgele üretir ama her seferinde aynı rastgele sayıyı üretiyor
  ///sayi=rand()%10 ///10 a gore modunu alacagından 0-9 arası sayi alacak
  ///sayi=rand()%100 /// 0 la 99 arasında bir sayı alacak
  ///sayi=1+rand()%10 /// 1 ile 100 arasında bir sayı alacak
  ///srand(1);  ///default olarak degerı 1 dir yine aynı sayı gelır
  
  
  sayi=1+rand()%10;
  srand(time(NULL));  ///hatayı verdiren kod bu hocada calısıyordu
  while (tahmin!=sayi){
    printf("\nkac olabilir mesela sence acaba: ");
    scanf("%d",&tahmin);
    if (tahmin-sayi>0)
      printf("abarttin sende");
    else if (tahmin-sayi<0)
      printf("cık biraz cık");
    else if (tahmin==sayi)
      printf("kazandin kocum");
  }
  
  return 0;
}
