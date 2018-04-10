#include "stdio.h"

int main(void) {
  int sayac;
  sayac=1;
  
  ///while
  while(sayac <=10){
    printf("%d",sayac);
    sayac++;
  }
  ///do while
  printf("\n");
  int sayac2=1;
  do{
    printf("%d",sayac2);
    sayac2++;
  }
  while(sayac2<=10);
  /// for
  printf("\n");
  int sayac3;
  for (sayac3=1;sayac3<=10;sayac3++)
    printf("%d",sayac3);
  
  printf("\n\n FOR if BREAK \n---------------\n");
  for (sayac3=1 ;sayac3<=10 ; sayac3++)
  {
    if (sayac3==5)
      break;
    }
    printf("%d",sayac3);
}
///break cıkısı
printf("FOR if continue \n---------------\n");
for (sayac3=1;sayac3<=10;sayac3++)
{ 
  if(sayac3==5)
    continue
  printf("%d",sayac3);
}
printf("\n\n");
  
  
  
  
  
  return 0;
}
