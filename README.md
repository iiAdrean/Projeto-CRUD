# Sistema de Triagem Clínica - C.R.U.D em C

##  Sobre o Projeto
Este projeto é um sistema de gerenciamento de pacientes (crud) desenvolvido em C. Ele foi construído com foco em lógica estruturada, utilizando vetores paralelos e estruturas de repetição e condição (sem o uso de bibliotecas avançadas ou strings).

O sistema não apenas armazena dados, mas também gera laudos médicos automatizados com base nas informações inseridas, emitindo alertas visuais de saúde.

##  Funcionalidades
*   **Cadastrar Paciente:** Cadastro numérico completo (ID, Peso, Altura, Pressão Sistólica e Diastólica) com validação de ID único (impede IDs duplicados).
*   **Buscar e Listar:** Exibe os dados dos pacientes cadastrados, incluindo:
    *   Cálculo automático do **IMC** e classificação (Baixo Peso, Peso Normal, Excesso, Obesidade, Obesidade Extrema).
    *   Classificação da **Pressão Arterial** com sistema de bandeiras (Normal, Pré-Hipertensão, Hipertensão).
    *   Cálculo da **Idade** processado dinamicamente através da data de nascimento.
    *   Classificação da **Glicemia** (Hipoglicemia, Glicemia Normal, Pré-diabetes, Possível diabetes).
*   **Deletar Paciente:** Remoção lógica do sistema realocando o último paciente da lista para a posição deletada, otimizando o uso dos vetores.
*   **Alterar Dado do Paciente:** Permitir localizar um paciente pelo ID e sobrescrever suas informações de saúde(Peso, Altura e Pressão), recalculando o IMC e a classificação de presssão na próxima.
*   **Proteção de Limites:** O sistema impede o cadastro além da capacidade máxima estipulada (3 pacientes).

##  Ambiente de Desenvolvimento e Extensões
O código foi desenvolvido e testado no **Visual Studio Code**, com o compilador GCC configurado através do pacote **MSYS2**.

Para garantir a melhor experiência de desenvolvimento e execução, as seguintes extensões do VS Code foram utilizadas:
*   **C/C++ Extension Pack (Microsoft):** Suporte base para a linguagem.
*   **Code Runner (Jun Han):** Responsável por executar o código de forma rápida e prática.
*   **Error Lens (Alexander):** Auxilia na detecção de erros de sintaxe em tempo real.
*   **Better Comments (Aaron Bond):** Para marcações estruturadas no código.

**Configuração Importante:** O Code Runner foi configurado especificamente para rodar o programa no **Terminal** integrado do VS Code (opção `Run In Terminal`), e não na aba "Saída", permitindo a interação correta com a função `scanf`.

##  Como Executar o Projeto

1. Abra o arquivo principal `.c` no Visual Studio Code.
2. Certifique-se de que o terminal integrado esteja limpo.
3. Utilize os seguintes atalhos configurados pelo Code Runner:
   * **Para Iniciar/Executar o código:** Pressione `Ctrl + Alt + N`
   * **Para Parar a execução (Forçar parada):** Pressione `Ctrl + Alt + M`
4. Interaja com o menu numérico diretamente pelo terminal.

---
**Desenvolvido por: Adrean, Paloma e Vinicius**