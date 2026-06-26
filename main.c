
#include <stdio.h> 
int main() { 
float peso, altura, resultado_imc; 
printf("--- Calculadora de IMC ---\n"); 
printf("Digite seu peso em quilos (ex: 70.5): "); 
scanf("%f", &peso); 
printf("Digite sua altura em metros (use ponto, ex: 1.75): "); 
scanf("%f", &altura); 
resultado_imc = peso / (altura * altura); 
printf("\nO valor do seu IMC e: %.2f\n", resultado_imc); 
return 0;
}
