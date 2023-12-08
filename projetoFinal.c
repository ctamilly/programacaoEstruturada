#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Veiculo {
    char proprietario[50], combustivel[10], modelo[20], cor[30], placa[8];
    int numChassi, ano;
    struct Veiculo *prox;
} Veiculo;

Veiculo* criarLista() {
    return NULL;
}

Veiculo* criarVeiculo() {
    Veiculo *novoVeiculo = (Veiculo*)malloc(sizeof(Veiculo));
    if (novoVeiculo == NULL) {
        printf("\nErro de alocacao de memoria\n");
        exit(EXIT_FAILURE);
    }
    novoVeiculo->prox = NULL;
    return novoVeiculo;
}

Veiculo* registrar(Veiculo *lista) {
    Veiculo *novoVeiculo = criarVeiculo();
    printf("\n========= REGISTRO DO VEICULO =========\n");
    printf("\n==> Digite o nome do proprietario: ");
    fflush(stdin);
    fgets(novoVeiculo->proprietario, sizeof(novoVeiculo->proprietario), stdin);
    printf("\n==> Digite o tipo de combustivel do veiculo: ");
    fflush(stdin);
    fgets(novoVeiculo->combustivel, sizeof(novoVeiculo->combustivel), stdin);
    printf("\n==> Digite o modelo do veiculo: ");
    fflush(stdin);
    fgets(novoVeiculo->modelo, sizeof(novoVeiculo->modelo), stdin);
    printf("\n==> Digite a cor do veiculo: ");
    fflush(stdin);
    fgets(novoVeiculo->cor, sizeof(novoVeiculo->cor), stdin);
    printf("\n==> Digite a placa do veiculo: ");
    fflush(stdin);
    fgets(novoVeiculo->placa, sizeof(novoVeiculo->placa), stdin);
    printf("\n==> Digite o numero do chassi: ");
    scanf("%d", &novoVeiculo->numChassi);
    printf("\n==> Digite o ano do veiculo: ");
    scanf("%d", &novoVeiculo->ano);

    if (lista == NULL) {
        return novoVeiculo;
    } else {
        Veiculo *atual = lista;
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        atual->prox = novoVeiculo;
        return lista;
    }
}

void listarAnoCombustivel(Veiculo *lista) {
    Veiculo *atual = lista;
    printf("\n - Lista de proprietarios de carros a partir de 2010 movidos a diesel: ");
    while (atual != NULL) {
        if (atual->ano >= 2010 && strcmp(atual->combustivel, "diesel") == 0) {
            printf("\n%s", atual->proprietario);
        }
        atual = atual->prox;
    }
}

void listarPlacas(Veiculo *lista) {
    Veiculo *atual = lista;
    printf("\n - Lista de placas que iniciam com J e terminam com 0, 2, 4 ou 7 e seus respectivos proprietarios: ");
    while (atual != NULL) {
        if (atual->placa[0] == 'J' && strchr("0247", atual->placa[6]) != NULL) {
            printf("\n Placa: %s", atual->placa);
            printf("\n Proprietario: %s", atual->proprietario);
        }
        atual = atual->prox;
    }
}

void listarModelo(Veiculo *lista) {
    Veiculo *atual = lista;
    printf("\n - Lista de modelos e cores de acordo com as placas especificadas: ");
    while (atual != NULL) {
        char segundaLetra = atual->placa[1];
        if (strchr("AEIOUaeiou", segundaLetra) != NULL) {
            int soma = 0;
            for (int i = 0; i < 7; i++) {
                if (isdigit(atual->placa[i])) {
                    soma += atual->placa[i] - '0';
                }
            }
            if (soma % 2 == 0) {
                printf("\n Modelo: %s", atual->modelo);
                printf("\n Cor: %s", atual->cor);
                printf("\n Placa: %s", atual->placa);
            }
        }
        atual = atual->prox;
    }
}

void trocarProprietario(Veiculo *lista, int numChassi) {
    Veiculo *atual = lista;
    while (atual != NULL) {
        if (atual->numChassi == numChassi) {
            int temZero = 0;
            for (int i = 0; i < 7; i++) {
                if (atual->placa[i] == '0') {
                    temZero = 1;
                    break;
                }
            }
            if (!temZero) {
                printf("\n Digite o novo proprietario para o veiculo com chassi %d: ", numChassi);
                fflush(stdin);
                fgets(atual->proprietario, sizeof(atual->proprietario), stdin);
                printf("\n Proprietario atualizado com sucesso!\n");
                return;
            } else {
                printf("\n Troca nao eh possivel, pois o veiculo com chassi %d possui o digito 0 na placa.\n", numChassi);
                return;
            }
        }
        atual = atual->prox;
    }
    printf("\n Veiculo com chassi %d nao encontrado.\n", numChassi);
}

void liberarLista(Veiculo *lista) {
    Veiculo *atual = lista;
    Veiculo *prox;
    while (atual != NULL) {
        prox = atual->prox;
        free(atual);
        atual = prox;
    }
}

int main() {
    Veiculo *lista = criarLista();
    int opcao;

    do {
        printf("\n\n------------------------------------------------------------------------------------");
        printf("\n --------------------------- SECRETARIA DE TRANSPORTES -------------------------------");
        printf("\nDigite 1 --> Cadastrar veiculo");
        printf("\nDigite 2 --> Listar proprietarios de veiculos a partir de 2010 movidos a diesel.");
        printf("\nDigite 3 --> Listar placas que iniciam com J e terminam com 0, 2, 4 ou 7");
        printf("\nDigite 4 --> Listar modelos e cores cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numéricos fornece um número par.");
        printf("\nDigite 5 --> Trocar proprietario - a placa nao pode ter 0");
        printf("\nDigite 0 --> Sair do sistema");
        printf("\n-------------------------------------------------------------------------------------");
        printf("\nDigite a opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                lista = registrar(lista);
                break;
            case 2:
                listarAnoCombustivel(lista);
                break;
            case 3:
                listarPlacas(lista);
                break;
            case 4:
                listarModelo(lista);
                break;
            case 5:
                printf("\nDigite o numero do chassi: ");
                int chassi;
                scanf("%d", &chassi);
                trocarProprietario(lista, chassi);
                break;
            case 0:
                break;
            default:
                printf("\nOpcao invalida\n");
        }
    } while (opcao != 0);

    liberarLista(lista);

    return 0;
}
