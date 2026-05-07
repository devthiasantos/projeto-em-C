Lógica de Processamento 
A base do processamento reside na fórmula do IMC, que relaciona a massa (kg) 
e a altura (m). No desenvolvimento em C, é fundamental o uso de variáveis de 
precisão real (float ou double), dado que a altura e o resultado final 
utilizam casas decimais. 
Código Fonte Comentado 
Abaixo, apresento o código pronto para compilação: 

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
5 
return 0; 
}
