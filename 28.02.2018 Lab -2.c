#include "stdio.h"

int main()
{
  char karakter;
  char str[15];
  
  printf(" 1 karakter giriniz: ");
  scanf("%c",&karakter);
  printf("girdiginiz karakter: %c dir\n\n",karakter);
  fflush(stdin); /// tampon bölgeyı temizler scanf de sorun yasarsanız
  ///kullanırsınız
  
  
  printf("bir kelime gir: ");
  scanf("%s",&str);
  /// degisken tanımlarken ilk önce içi boş bir alan olusturuyoruz
  printf("girdiginiz kelime : %s",str);
  
  

}
