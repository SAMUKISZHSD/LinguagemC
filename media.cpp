
#include <stdio.h>
#include <locale.h>

int main(){ 
    setLocale(LC_ALL, "portuguese");
    
    
//declarando variaveis
float a1, a2, af, media;
float menor;

//entrada de dados
do{

printf("digite sua A1");
scanf("%f, &a1");

} while(a1 < 0 || a1 > 5);

do{
    
printf("digite sua A2");
scanf("%f, &a2");

} while(a2 < 0 || a2 > 5);


media = a1 + a2

if(media>= 6){
	printf("Aluno aprovado!");
}else{
	do{
		printf("Digite sua AF")
		scanf("%f, &af");
		
	}while(af < 0 || af > 5);
	maior = a1;
	
	if(maior <= a2){
		maior = a2;
	}
	
	media = af + maior;
	
	if(media >= 6){
		printf("Aluno aprovado");
	}else{
		printf("Aluno de DP");
	}

}


   
    return 0;
}
