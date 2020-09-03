//SEFA ENES ERGİN-sefaenesergin@gmail.com
// Kendisine verilen iki sayının OBEB (Ortak Bölenlerin En Büyüğü) değerini hesaplayıp, geriye döndüren fonksiyon.
#include <stdio.h>
int obeb(int a,int b){
    int k=a%b;
    while(k!=0){
        a=b;
        b=k;
        k=a%b;
    }
    printf("İki sayının ebobu: %d !\n",b);

    return obeb;
}
int main(int argc, const char * argv[]) {
    int a,b;
    printf("Lütfen OBEB sonucunu hesaplamak istediğiniz sayıları giriniz...\n");
    scanf("%d",&a);
    scanf("%d",&b);
    obeb( a,  b);
    return 0;
}
