# ⚖️ Calculadora de IMC em C

Este é um projeto prático desenvolvido em linguagem C para calcular o Índice de Massa Corporal (IMC) de forma direta e objetiva.

## 🚀 Funcionalidades

* **Entrada de dados:** Recebe o peso (em kg) e a altura (em metros) informados pelo usuário.
* **Cálculo automático:** Processa as informações utilizando a fórmula matemática padrão do IMC.
* **Exibição do resultado:** Retorna o valor exato do IMC na tela com precisão de duas casas decimais.

## 💻 Código Fonte

```c
#include <stdio.h>

int main() {
    float peso, altura, resultado_imc;
    
    printf("--- Calculadora de IMC ---\n");
    
    printf("Digite seu peso em quilos (ex: 70.5): ");
    scanf("%f", &peso);
    
    printf("Digite sua altura em metros (ex: 1.75): ");
    scanf("%f", &altura);
    
    // Cálculo do IMC
    resultado_imc = peso / (altura * altura);
    
    printf("\nO valor do seu IMC é: %.2f\n", resultado_imc);
    
    return 0;
}
