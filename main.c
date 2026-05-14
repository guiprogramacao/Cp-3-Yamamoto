#include <stdio.h>

void exibirMenu(){
    printf("\n====================\n");
    printf("CAIXA ELETRONICO\n");
    printf("====================\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Saque\n");
    printf("3 - Realizar Deposito\n");
    printf("0 - Sair\n");
    printf("=====================\n");
    printf("Escolha uma opcao: ");
}

float realizarDeposito(float saldo) {
float valor;
printf("Digite o valor do deposito: ");
scanf("%f", &valor);
if (valor > 0) {
saldo += valor;
printf("Deposito realizado!\n");
} else {
printf("Valor invalido!\n");
}
return saldo;
}


void consultarSaldo(float saldo) {
printf("\n--- SALDO ATUAL ---\n");
printf("R$ %.2f\n", saldo);
printf("-------------------\n");
system("pause");
}


int main(){

    int opcao;
    int saldo;
    do {
    system("cls");
    exibirMenu();
    scanf("%d", &opcao);
    } while(opcao != 0);
    printf("Obrigado por usar nosso ATM!");
    while (getchar() != '\n');
    if (opcao < 0 || opcao > 3) {
    printf("Opcao Invalida!\n");
    }

    
    return 0;
}