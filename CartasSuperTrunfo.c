#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main(){
    printf("Jogo Super Trunfo de Países \n");
    
    char codigo[4];        //Código da carta
    int carta1;            //Carta 1
    int carta2;            //Carta2
    int populacao;         //População
    int area;              //Área
    float PIB;             //PIB
    int pontos_turisticos; //Pontos Turísiticos


    //Cadastro da primeira carta
    printf("Cadastro da primeira carta \n");
    printf("Digite o código da carta (ex:A01): \n");
    scanf("%s", codigo);

    printf("Digite a população: \n");
    scanf("%d", populacao);

    printf("Digite a área: \n");
    scanf("%d", area);

    printf("Digite o PIB: \n");
    scanf("%f", PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", pontos_turisticos);

    printf("Código da carta: %s");
    printf("População: %d");
    printf("Área: %d");
    printf("PIB: %f");
    printf("Número de pontos turísticos: %d");

    return 0;
}


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


