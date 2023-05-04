/*Claro! Aqui está um exercício de nível 3 que envolve recursão:

Escreva uma função recursiva que calcule o módulo de um número 
inteiro a, dividido por um número inteiro b, sem usar o operador 
de módulo (%). Os números a e b devem ser lidos do usuário. A função 
deve retornar o resultado do cálculo. Por exemplo, se a = 15 e b = 4,
 a função deve retornar 3, que é o módulo de 15 dividido por 4 (15 = 4 x 3 + 3).*/


int modular(int a, int b);

int main(void)
{
    int num, num2;

    printf("Entre com o numero que sera dividido:");
    scanf("%d", &num);
    printf("Entre com o numero que dividira:");
    scanf("%d", &num2);

    printf("O resultado do modulo de %d e %d eh ## %d ##", num, num2, modular(num, num2));

}

int modular(int a, int b)
{
    
}
