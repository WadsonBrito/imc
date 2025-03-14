# include <stdio.h>
int main(){
    float peso, altura, imc;
    
    printf("##### Programa Calculo IMC ##### - Wadson Brito\n\n");
    printf("Digite seu Peso Kg: ");
    scanf("%f", &peso);
    printf("Digite sua altura M: ");
    scanf("%f", &altura);

    imc = (peso / (altura * altura));  
    
    printf("Seu IMC é: %.2f\n", imc);

    if(imc <= 18.5){
        printf("Magreza\n");
    } else if(imc <= 24.9){
        printf("Peso Normal\n");
    } else if(imc <= 29.9){
        printf("Sobrepeso\n");
    } else if(imc <= 39.9){
        printf("Obesidade\n");
    } else if(imc >= 40.0){
        printf("Obesidade Grave\n");
    }
 return 0;
}
