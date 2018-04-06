#include "stdio.h"

int main(){
  int sayi,i=1,faktoriyel=1;
  printf("bir sayi giriniz: ");
  scanf("%d",&sayi);
  printf("girdiginiz sayi: %d dir\n",sayi);
  
  for (i=1;i<=sayi;i++)
  {
    faktoriyel=faktoriyel*i ;
  }
  printf("%d sayisinin faktoriyeli = %d ",sayi,faktoriyel);
  
  

return 0;
}
