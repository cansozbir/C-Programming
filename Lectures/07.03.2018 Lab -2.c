#include <stdio.h>
#include <stdlib.h>
///ogrencinin notunu alıp 50 yi gectiyse gectı gecemedıyse kaldi yazdır
int main() {
  int ogrnot,devamsizlik;
  printf("ogrenci notu ve devamsizligi giriniz : ");
  scanf("%d%d",&ogrnot,&devamsizlik);
  printf("ogrencinin notu: %d\t devamsizligi: %d ",ogrnot,devamsizlik);

  if ((ogrnot>=50)&& (devamsizlik<8))
  {
    printf("Gecti");
    if((ogrnot>90)&&(ogrnot<100))
        printf("\nAA");
    else if(ogrnot>80)
        printf("\nBB");
    else if(ogrnot>70)
        printf("\nCC");
    else
        printf("\nDD");
  }
  else
    {
    printf("Kaldi");
    printf("Dersi tekrar almali");
  }



  return 0;
}

