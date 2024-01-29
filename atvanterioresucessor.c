#include <stdio.h>
int main(){
    int numinteiro, numante, numsuce;
    printf("Digite um número inteiro:\n");
    scanf("%i", &numinteiro);
    numante = numinteiro - 1;
    numsuce = numinteiro + 1;
    printf("O número antecessor é: %i e o número sucessor é: %i", numante, numsuce);
return 0;
}
