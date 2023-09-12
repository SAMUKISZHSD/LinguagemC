#include <stdio.h>

int main(){ 
    //algoritmo para ler 5 idades e apresentar media
    
    int vet[5];
    int indice, some = 0;
    float media;
    
      
	  
	  for(indice = 0; indice < 5; indice++){
    	 //printf("%d", indice); //teste
		 printf("digite sua idade:");
         scanf("%d", &vet[indice]);
         soma += vet[indice]; 
		 // += é msm coisa que soma + indice
         //printf(%d, soma); //teste
          
         
	}
	
	media = soma / indice;
	
	printf("A media é: %.2f", media)
	
	
    
    
   
    return 0;
}
