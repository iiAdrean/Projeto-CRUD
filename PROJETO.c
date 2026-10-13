#include <stdio.h> 

int main() {
    
    int id_paciente[3];
    float peso[3];
    float altura[3];
    int sistolica[3];
    int diastolica[3];

    int quantidade = 0;
    int opcao = 0;
    int i;

    do{
        printf("\n=---Menu da clinica---=\n");
        printf("1.Cadastrar pacientes\n");
        printf("2.Bucar paciente\n");
        printf("3.Deletar paciente\n");
        printf("4.Modificar dado(s) de paciente\n");
        printf("5.Sair\n");
        printf("\nOpcao:\n");

        scanf("%d",&opcao);

       if (opcao == 1){
            if(quantidade < 3){
                int id_tempo;
                int existe = 0; 

                printf("Digite o id do novo paciente(Apenas numeros): \n");
                scanf("%d", &id_tempo);

                
                for(int j = 0; j < quantidade; j++){
                    if(id_paciente[j] == id_tempo){
                        existe = 1; 
                        break;      
                    }
                }
                if(existe == 1){
                    printf("\n Erro: O ID %d ja esta cadastrado no sistema!\n", id_tempo);
                } 
                
                else {
                    id_paciente[quantidade] = id_tempo; 

                    printf("\n Digite o peso(Apenas numeros): \n");
                    scanf("%f", &peso[quantidade]);
                    printf("Digite a altura do paciente(ex: 1.70): \n");
                    scanf("%f", &altura[quantidade]);
                    printf("Digite a pressao sistolica (ex: 120): \n");
                    scanf("%d", &sistolica[quantidade]);
                    printf("Digite a pressao diastolica (ex: 80): \n");
                    scanf("%d", &diastolica[quantidade]);

                    quantidade++;
                    printf("\n Paciente cadastrado com sucesso!\n");
                }
            }
            else{
                printf("\n Erro: O sistema esta lotado!\n");
            }
        }
        else if(opcao == 2){
             if(quantidade == 0){
            printf("\n Nao ha pacientes cadastrdos\n");

        }
        else{
            for(i = 0;i<quantidade;i++){

                float imc = peso[i] / (altura[i] * altura[i]);
                
                printf("Id: %d | Peso: %.2f kg | Altura: %.2f m\n", id_paciente[i], peso[i], altura[i]);
                    
                    
                    printf("IMC: %.2f -> ", imc);
                    if (imc < 18.5) {
                        printf("\n BAIXO PESO\n");
                    } else if (imc >= 18.5 && imc <= 24.9) {
                        printf("\n PESO NORMAL\n");
                    } else if (imc >= 25 && imc <= 29.9) {
                        printf("\n EXCESSO DE PESO\n");
                    } else if (imc >= 30 && imc <= 34.9) {
                        printf("\n OBESIDADE\n");
                    } else if (imc >= 35) {
                        printf("\n OBESIDADE EXTREMA\n");
                    }
                printf("Pressao: %dx%d mmHg -> ", sistolica[i], diastolica[i]);
                    
                    if (sistolica[i] >= 140 || diastolica[i] >= 90) {
                        printf("[\n HIPERTENSAO: bandeira vermelha!]\n");
                    } 
                    else if ((sistolica[i] >= 121 && sistolica[i] <= 139) || (diastolica[i] >= 81 && diastolica[i] <= 89)) {
                        printf("[\n PRE-HIPERTENSAO: bandeira amarela!]\n");
                    } 
                    else if (sistolica[i] <= 120 && diastolica[i] <= 80) {
                        printf("[\n Pressao Normal: bandeira verde]\n");
                    }
            }}
        }
        else if(opcao == 3){
            if(quantidade==0){
                printf("\n Nao ha pacientes cadastrados para excluir\n");
            } else{
                int id_busca;
                int pos = -1;
                printf("\n Digite o ID do paciente que deseja deletar: \n");
                scanf("%d", &id_busca);

                for(int a=0;a<quantidade; a++){
                    if(id_paciente[a] == id_busca){
                        pos = a;
                        break;
                    }
                }
            
                 if(pos != -1){
                    id_paciente[pos] = id_paciente[quantidade - 1];
                    peso[pos] = peso[quantidade - 1];
                    altura[pos] = altura[quantidade - 1];
                    sistolica[pos] = sistolica[quantidade - 1];
                    diastolica[pos] = diastolica[quantidade - 1];
                    
                    quantidade--;
                    printf("\n Paciente deletado com sucesso!\n");
                } else {
                    printf("\n Erro: Paciente nao encontrado!\n");
                }
                }
        }
        else if(opcao == 4){
            if(quantidade == 0){
                printf("\n Nao ha pacientes cadastrados para modificar\n");
            } else{
                int id_busca;
                int pos = -1;

                printf("\n Digite o ID do paciente que deseja atualizar: ");
                scanf("%d", &id_busca);

                for(int a =0; a<quantidade; a++){
                    if(id_paciente[a] == id_busca){
                        pos = a;
                        break;
                    }
                }
                if(pos != -1){
                    printf("\n Digite o novo peso (Atual: %.2f) :\n",peso[pos]);
                    scanf("%f",&peso[pos]);

                    printf("Digite a nova altura (Atual: %.2f) :\n",altura[pos]);
                    scanf("%f",&altura[pos]);

                    printf("Digite a nova pressao sistolica (Atual: %.d) :\n",sistolica[pos]);
                    scanf("%d",&sistolica[pos]);

                    printf("Digite a nova pressao diatolica (Atual: %.d) :\n ",diastolica[pos]);
                    scanf("%d",&diastolica[pos]);

                }else{
                    printf("\n Paciente nao encontrado \n");
                }

            }
        }
        else if(opcao == 5){
            printf("\n Saindo do sistema... Ate logo!\n");
        }
        else{
            printf("\n Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 5);

     return 0;
} 