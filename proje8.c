#include <stdio.h>
#include <stdlib.h>


int main() {

    int sinav1, sinav2, sinav3, proje, topla, ort;
  
    printf("Birinci sinav notunuzu giriniz: \n");
    scanf("%d",sinav1);
    
    printf("Ikiinci sinav notunuzu giriniz: \n");
    scanf("%d",sinav2);
    
    printf("Ucuncu sinav notunuzu giriniz: \n");
    scanf("%d",sinav3);
    
    printf("Proje sinav notunuzu giriniz: \n");
    scanf("%d",proje);
     
    ort=(sinav1+sinav2+sinav3+proje)/4;
	
	printf("Not ortalamaniz: %d",ort); 
    
	return 0;
}
