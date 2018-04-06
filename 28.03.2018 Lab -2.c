#include "stdio.h"
int kuvvetAl(int taban , int us);
int main() {
  int x = kuvvetAl(2,3);   ///burda fonksiyonun biz deger vererek calıstıgını gorduk koda bir katkısı yok
  printf("x = %d\n",x);

  int tabanSayi,usSayi,sonuc;
  printf("taban sayi : ");
  scanf("%d",&tabanSayi);

  printf("us sayi: ");
  scanf("%d",&usSayi);

  ///sonuc=     bu kısımda degiskenleri bizden alarak calıstırdık
  printf("\n");
  sonuc = kuvvetAl(tabanSayi,usSayi);

  printf("%d ** %d = %d dir",tabanSayi,usSayi,sonuc);


  return 0;
}


int kuvvetAl(int taban , int us)
{
    /// k(2,2) için k(2,2)=2*(k(2,1))=2*2*1=4 gibi
    ///uc uzeri 5 = 3 carpı 3 üzeri 4 = 3*3* 3 üzeri 3 ...
    if (us == 1)              ///temel durum diye gecer
        return taban;
    else                    /// recursive kısmı
        return (taban*kuvvetAl(taban,us-1));
}


