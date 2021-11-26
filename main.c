#include <stdio.h>
#include <conio.h>

void tela();
void usuario_cadastrado();
   struct usuarios
{ 
        char nome[60], endereco[20], telefone[11], energia[10];
        int CPF;
        int potencia;
        int consumo;
        int codigo;
    };
       struct usuarios usu[2];
int main(){
  int i;
  int senha;
    printf("\nDigite a senha:");
    scanf("%d", &senha);
    if(senha == 1234){
         printf("\nACESSO LIBERADO");
    tela(); 
    for (i = 0; i < 2; i++)
    {
     printf("\nDigite o codigo:");
    scanf("%d", &usu[i].codigo);
    printf("\nDigite o CPF:");
    scanf("%d", &usu[i].CPF);
    printf("\nDigite o nome:");
    fflush(stdin);
    fgets(usu[i].nome, 60, stdin);
    printf("\nDigite o telefone:");
    fflush(stdin);
    fgets(usu[i].telefone, 20, stdin);
    printf("\nDigite o endereco:");
    fflush(stdin);
    fgets(usu[i].endereco, 11, stdin);
    printf("\nDigite 1 para ENERGIA SOLAR\n");
    printf("Digite 2 para ENERGIA EOLICA\n");
    printf("Digite 3 para ENERGIA HIDRICA\n");
    fflush(stdin);
    fgets(usu[i].energia, 10, stdin);
    printf("\nDigite qual a potencia do sistema:");
    scanf("%d", &usu[i].potencia);
    printf("\nDigite qual o consumo medio:");
    scanf("%d", &usu[i].consumo);
    usuario_cadastrado();
    }
        
           printf("\n\n");
           printf("\n----------------------------------------------------------------------------------------------------------------------\n");
           printf("\n                                                CADASTROS      \n");
           printf("\n----------------------------------------------------------------------------------------------------------------------\n");
           for (i = 0; i < 2; i++)
           {
           printf("\nCodigo:%d\n", usu[i].codigo);
           printf("\nCPF: %d\n", usu[i].CPF);
           printf("\nNome: %s\n", usu[i].nome);
           printf("\nTelefone: %s\n", usu[i].telefone);
           printf("\nEndereco: %s\n", usu[i].endereco);
           printf("\nEnergia: %d\n", usu[i].energia);
           printf("\nPotencia do Sistema(kWp): %d\n", usu[i].potencia);
           printf("\nConsumo Medio(kWh): %d\n", usu[i].consumo);
           getch();
           printf("\n\n");

           }
 system("pause");
    }else
    printf("ACESSO NEGADO");
             
 return 0;
}
void tela(){ 
    printf("\n----------------------------------------------------------------------------------------------------------------------\n");
    printf("\n                                                CADASTRO DE USUARIOS       \n");
    printf("\n                                               DE ENERGIA RENOVAVEIS       \n");
    printf("\n----------------------------------------------------------------------------------------------------------------------\n");
}
void usuario_cadastrado(){
    printf("\n                                               USUARIO CADASTRADO COM SUCESSO!       \n");
}
