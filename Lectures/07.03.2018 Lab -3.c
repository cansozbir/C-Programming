#include "stdio.h"
///iscinin 1 haftada ne kadar calistigina bakacagiz
///iscinin birim saat ücretini ve haftalik maasini hesaplayacagiz
///maas=saat*ucret

int main(){
  int calismasaat; ///kac saat calisti
  float birimucret,maas; /// 1 saatte odenecek ucret
  printf("isci kac saat calisti ve 1 saatlik ucreti nedir ?");

  scanf("%d%f",&calismasaat,&birimucret);

  if (calismasaat>40)
    maas=(((calismasaat-40)*birimucret*1.5) + (40*birimucret));
  else
    maas=calismasaat*birimucret;


  printf("\n\n\niscinin haftalik maasi : %.2f\n\n\n\n",maas);





  return 0;
}

