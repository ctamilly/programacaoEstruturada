/*Instruções
Implementar um sistema de controle de estoque com as funcionalidades de cadastrar produtos, consultar produtos, gerar relatório de produtos e remover produtos do estoque. Funções que deverão estar presentes no código:

Função que inicializa uma lista vazia; (0,5 ponto)
Função que adiciona um novo produto à lista de estoque. Ela solicita ao usuário informações como código, descrição, quantidade e valor do produto. (0,5 ponto)
Função que percorre a lista de estoque e imprime um relatório com as informações de cada produto, incluindo código, descrição, quantidade e valor. (0,5 ponto)
Função que permite ao usuário pesquisar um produto pelo código. (0,5 ponto)
Função que permite ao usuário remover um produto do estoque. Ela solicita o código do produto a ser removido e busca na lista o produto correspondente. Se encontrar o produto, o remove da lista. Caso contrário, exibe uma mensagem informando que o produto não está cadastrado. (1,0 ponto)
O sistema deverá exibir um menu com as opções disponíveis e realizar as chamadas correspondentes às funções acima, de acordo com a escolha do usuário. O loop deverá continuar até que o usuário escolha sair do programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct Produto{
    int codigo;
    char descricao[100];
    int quantidade;
    float preco;
    struct Produto *prox;
}Produto;

Produto* criarListaVazia(){
    return NULL;
}

Produto* criarProduto(){
    Produto *novoProduto = (Produto*)malloc(sizeof(Produto));
    if(novoProduto == NULL){
        printf("Erro na alocação de memória!");
        exit(EXIT_FAILURE);
    }
    novoProduto->prox = NULL;
    return novoProduto;
}
Produto* cadastrar(Produto *lista){
    srand(time(NULL));
    Produto *novoProduto = criarProduto();
    novoProduto->codigo = rand() % 100;
    printf("\n--------------------------- CADASTRO DE NOVO PRODUTO ---------------------------");
    printf("\nDigite a descrição do produto: ");
    fflush(stdin);
    fgets(novoProduto->descricao, sizeof(novoProduto->descricao), stdin);
    printf("\nDigite a quantidade do produto: ");
    scanf("%d", &novoProduto->quantidade);
    printf("\nDigite o preço do produto: ");
    scanf("%f", &novoProduto->preco);

    novoProduto->prox = lista;
    return novoProduto;
}


void mostrarLista(Produto *lista){
    Produto *atual = lista;
    if(lista == NULL){
        printf("\nLista vazia!");
        return;
    }else{
        while(atual != NULL){
            printf("\n--------------------------- LISTA DE PRODUTOS ---------------------------");
            printf("\nCodigo: %d", atual->codigo);
            printf("\nDescricao: %s", atual->descricao);
            printf("\nQuantidade: %d", atual->quantidade);
            printf("\nPreço: %.2f\n", atual->preco);
            atual = atual->prox;
        }
    }
}

Produto* pesquisarProduto(Produto *lista, int idBusca){
    Produto *atual = lista;
    while(atual != NULL){
        if(atual->codigo == idBusca){
            printf("\nDescricao: %s", atual->descricao);
            printf("\nQuantidade: %d", atual->quantidade);
            printf("\nPreço: %.2f", atual->preco);
            return atual;
        }
        atual = atual->prox;
    }
    printf("\nProduto nao encontrado!");
    return NULL;
}

Produto* excluirProduto(Produto *lista, int idBusca){
    Produto *atual = lista;
    Produto *anterior = NULL;

    while(atual != NULL && atual->codigo != idBusca){
        anterior = atual;
        atual = atual->prox;
    }
    if(atual != NULL){
        if(anterior != NULL){
            anterior->prox = atual->prox;
        }else{
            lista = atual->prox;
        }
        free(atual);
        printf("\nO produto foi excluido!");
    }else{
        printf("\nProduto nao cadastrado.");
    }
    return lista;
}

void liberarLista(Produto *lista){
    Produto *atual = lista;
    Produto *prox;
    while(atual != NULL){
        prox = atual->prox;
        free(atual);
        atual = prox;
    }
}

int main(){
    Produto *lista = criarListaVazia();
    int opcao;
    int idBusca;
        
    do{
        printf("\n\n--------------------------- MENU DE OPCOES  ---------------------------");
        printf("\n1 - Cadastrar um produto");
        printf("\n2 - Listar todos os produtos");
        printf("\n3 - Pesquisar um produto");
        printf("\n4 - Excluir um produto");
        printf("\n0 - Sair");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                lista = cadastrar(lista);
            break;
            case 2:
                mostrarLista(lista);
            break;
            case 3:
                printf("\nDigite o codigo para pesquisar: ");
                scanf("%d", &idBusca);
                pesquisarProduto(lista, idBusca);
            break;
            case 4:
                printf("\nDigite o codigo para excluir o produto: ");
                scanf("%d", &idBusca);
                lista = excluirProduto(lista, idBusca);
            break;     
        }

    }while(opcao != 0);

    liberarLista(lista);

    return 0;
}
