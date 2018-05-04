#include <stdio.h>
#include <stdlib.h>

///pointerlar

int main()
{
    int x;
    printf("\nkaresi alinacak sayi: ");
    scanf("%d",&x);
    printf("kareal fonkdan once x = %d\n",x);
    printf("kareal fonk sonucu = %d\n",kareAl(x));
    printf("kareal fonkdan sonra x = %d\n",x);  /// burada x in bir kopyasýnda degisim yapildigindan x degeri degismiyor
    printf("\n ---------------------\n",x);
    printf("karealpointer fonkdan once x = %d\n",x);
    printf("karealpointer fonk sonucu = %d\n",kareAlPointerla(&x));
    printf("karealpointer fonkdan sonra x = %d\n",x);  ///adreste degisim yaptýgý icin sonucta bir degisim oluyor
    printf("\n");
    return 0;
}

int kareAl(int sayi) ///pass by value - x'in kopyasi
{
    sayi=sayi*sayi;
    return sayi;
}

int kareAlPointerla(int *sayiPtr)   ///pass by reference  --- burda direkt x in bellekteki yeri gidiyor
{
    *sayiPtr = *sayiPtr**sayiPtr;
    return *sayiPtr;
    /// üstteki iki satiri silip "return *sayiPtr**sayiPtr;" yazarsan adreste degisiklik yapmadan döndürmüs olursun
}
