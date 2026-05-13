// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int numeros [10];
    int pos;
    
    for (pos = 0; pos < 10; pos++){
         printf ("Digite o numero da posição %d:", pos);
         scanf ("%d", &numeros[pos]);
    }
    printf("Valores Digitados: ");
    for (pos = 0; pos < 10; pos++){
         printf("\nO numero Registrado na Posição %d foi: %d", pos, numeros[pos]);
    }
    
    return 0;
}
