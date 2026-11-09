//"Parser de Logs" – Usar um do/while para ler códigos de transações financeiras.
//O loop encerra quando o código 0 é recebido, imprimindo o total de operações suspeitas contabilizadas.
#include <stdio.h>
int main() {
    int code, suspeito = 0;
    do {
        printf("Digite um codigo: ");
        scanf("%i", &code);
        if (code>67) {
            suspeito++;
        }
    } while (code != 0);
    printf("Parser finalizado! Numero de operacoes suspeitas: %i", suspeito);

    return 0;
}