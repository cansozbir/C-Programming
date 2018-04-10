#include <stdio.h>
#include <stdlib.h>

#define BOYUT 6    
int main()
{
    int toplam=0,i,dizi[BOYUT]={1,2,3,4,5,6};
    for(i=0;i<BOYUT;i++){
        toplam += dizi[i];
    }
    printf("elemanlari toplami: %d",toplam);
}
