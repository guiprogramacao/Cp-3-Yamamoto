#include <stdio.h>
#include <stdlib.h>

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
}

float realizarSaque(float saldo) {
float valor;
printf("Valor do saque: ");
scanf("%f", &valor);
    if (valor > 1000.00) {
        printf("Limite diario excedido!\n");
    } else if (valor > saldo) {
        printf("Saldo insuficiente!\n");
    } else if (valor > 0) {
        saldo -= valor;
        printf("Saque realizado!\n");
    } else {
        printf("Valor invalido!\n");
    }

    return saldo;
}

int main(){

    int opcao;
    float saldo = 500.0;

    do {

        system("cls");

        exibirMenu();
        scanf("%d", &opcao);

        while (getchar() != '\n');

        switch(opcao) {

            case 1:
                consultarSaldo(saldo);
                break;

            case 2:
                saldo = realizarSaque(saldo);
                break;

            case 3:
                saldo = realizarDeposito(saldo);
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao Invalida!\n");
        }

        printf("\nSaldo: R$ %.2f\n", saldo);

        printf("\nPressione Enter para continuar...");
        getchar();

    } while(opcao != 0);

    printf("Obrigado por usar nosso ATM!");

    return 0;
}