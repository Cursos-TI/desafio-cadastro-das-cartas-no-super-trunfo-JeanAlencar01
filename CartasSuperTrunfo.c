#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    int Pontos_Turísticos, População;
    float Área, PIB;
    char Código_Carta[10];
    char Pais[25];
    char Estado[25]; 
    char Cidade[50];

        printf ("Cada país será dividido em oito estados, identificados pelas letras de A a H.\n Cada estado terá quatro cidades, numeradas de 1 a 4.\n A combinação da letra do estado e o número da cidade define o código da carta\n (por exemplo, A01, A02 , B01, B02).\n");

        printf ("Digite o Estado\n");
        scanf ("%s", &Estado);

        printf ("Digite o Código da sua Carta\n");
        scanf ("%s", &Código_Carta);

        printf ("Digite o nome da Cidade\n");
        scanf ("%s", &Cidade);
        
        printf ("Digite a População\n");
        scanf ("%d", &População);

        printf ("Digite a Área km²\n");
        scanf ("%f", &Área);

        printf ("Digite o PIB\n");
        scanf ("%f", &PIB);

        printf ("Digite o Número de Pontos Turísticos \n");
        scanf ("%d", &Pontos_Turísticos);

        printf ("Sua Carta foi Cadastrada com Sucesso!\n");
        
        printf ("Estado: %s\n", Estado);
        printf ("Código da Carta: %s\n",Código_Carta);
        printf ("Nome da Cidade: %s\n", Cidade);
        printf ("População: %d\n", População);
        printf ("Área km²: %f\n", Área);
        printf ("PIB: %f\n", PIB);
        printf ("Número de Pontos Turísticos: %d\n", Pontos_Turísticos);






    return 0;
}
