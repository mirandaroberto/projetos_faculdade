#include <stdio.h>

struct territorio
{
    char nome[50];
    char cor[20];
    int tropas;
};

int main()
{
    struct territorio lista[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do territorio /n");
        scanf("%s", lista[i].nome);

        printf("Digite a cor do territorio (EX: Vermelho, Azul...) /n");
        scanf("%s", lista[i].cor);

        printf("Digite o numero de tropas /n");
        scanf("%d", &lista[i].tropas);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("territorio %s | Cor %s | Numero de tropas %d /n", lista[i].nome, lista[i].cor, lista[i].tropas);
    }

    return 0;
}
