#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


void counter_space();
void counter_vowels();
void counter_consonantes();

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	char phrase[50];										  //á    é    í    ó    ú
	char vowels[] = {'A','E','I','O','U','a','e','i','o','u', 160, 130, 161, 162, 163};
	char consonantes[] = "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz";
	int ph;
	
	printf("\t     Desafio de Português     \n\n\n");
	printf("Digite uma frase -> ");
	gets(phrase);
	
	ph = strlen(phrase);
	
	printf("%d caracteres;\n", ph);
	
	counter_space(phrase);
	counter_vowels(phrase, vowels);
	counter_consonantes(phrase, consonantes);

	return 0;
	
}


void counter_space(char *phrase, int loop1){
	int counter1 = 0;
	for(loop1=0; loop1<strlen(phrase); loop1++){
		if(phrase[loop1] == ' '){
			counter1++;
		}
	}
	if (counter1){
		printf("%d espaços em branco;\n", counter1);
	}

}

void counter_vowels(char *phrase, char *vowels, int loop2, int loop3){
	int counter2 = 0;
	for(loop2=0; loop2<strlen(phrase); loop2++){
		for(loop3=0; loop3<strlen(vowels); loop3++){
			if(phrase[loop2] == vowels[loop3]){
			counter2 ++;
		}	
	}
}
	printf("%d vogais;\n", counter2);

}

void counter_consonantes(char *phrase, char *consonantes, int loop2, int loop4){
	int counter3= 0;
	for(loop2=0; loop2<strlen(phrase); loop2++){
		for(loop4=0; loop4<strlen(consonantes); loop4++){
			if(phrase[loop2] == consonantes[loop4]){
			counter3 ++;
		}	
	}
}

	printf("%i consoantes.", counter3);

	
}


