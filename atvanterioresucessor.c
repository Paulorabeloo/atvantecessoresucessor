#include <stdio.h>
int main(){
    int numinteiro, numante, numsuce;
    printf("Digite um n�mero inteiro:\n");
    scanf("%i", &numinteiro);
    numante = numinteiro - 1;
    numsuce = numinteiro + 1;
    printf("O n�mero antecessor �: %i e o n�mero sucessor �: %i", numante, numsuce);
return 0;
}
