# Round Robin Scheduler

Este é um projeto em C que implementa o **Algoritmo de Escalonamento Round Robin**, um dos algoritmos clássicos de escalonamento de processos em sistemas operacionais. O algoritmo garante a divisão justa do tempo de execução entre os processos, atribuindo um quantum de tempo fixo para cada um, e cada processo é executado de forma cíclica.

## 📋 **Descrição do Projeto**

O programa simula a execução de processos utilizando o algoritmo **Round Robin**. Ele solicita ao usuário o número de processos, o tempo de execução de cada processo e o valor do quantum. A cada ciclo, o processo é executado por um tempo igual ao quantum, ou até que seja finalizado, e depois retorna ao final da fila de processos.

Se todos os processos forem concluídos, o escalonador termina a execução. Durante a execução, o programa exibe o estado de cada processo, incluindo o momento em que ele é executado e quando é finalizado.

----------

## 🛠️ **Funcionalidades**

-   **Simulação de Escalonamento Round Robin**: O programa processa múltiplos processos com base no quantum fornecido.
-   **Gerenciamento de Processos**: Para cada processo, é exibida uma mensagem indicando quando ele está sendo executado e quando ele termina.
-   **Entrada Dinâmica**: O usuário pode inserir o número de processos, o tempo de execução de cada processo e o valor do quantum.

----------

## 🚀 **Como Executar o Programa**

1.  **Clonar o repositório ou copiar o código fonte.**
    
2.  **Compilar o código C utilizando um compilador GCC**:
    
    bash
    
    Copiar código
    
    `gcc -o round_robin round_robin.c` 
    
3.  **Executar o programa**:
    
    bash
    
    Copiar código
    
    `./round_robin` 
    
4.  **Siga as instruções na tela**:
    
    -   Insira o número de processos.
    -   Insira o tempo de execução de cada processo.
    -   Insira o valor do quantum.
5.  **Visualize a execução do escalonamento**:
    
    -   O programa exibirá quando cada processo está sendo executado e o momento em que cada um é finalizado.

----------


##  **Explicação do Algoritmo**

1.  **Round Robin**: Cada processo recebe uma fatia de tempo (quantum) para executar.
2.  **Fila Circular**: Após executar pelo quantum, se o processo não for finalizado, ele é colocado no final da fila.
3.  **Execução Cíclica**: Cada processo recebe atenção cíclica, garantindo que nenhum processo fique muito tempo sem ser executado.
4.  **Processo Finalizado**: Quando o tempo restante de um processo chega a zero, ele é removido do ciclo de execução.

----------

##  **Complexidade**

-   **Complexidade de Tempo**: O algoritmo percorre todos os processos de forma cíclica, então a complexidade total é **O(n * t / q)**, onde:
    
    -   **n** é o número de processos.
    -   **t** é o tempo total de execução.
    -   **q** é o valor do quantum.
-   **Complexidade de Espaço**: O espaço usado é proporcional a **O(n)**, pois cada processo precisa armazenar seu ID, burst_time e remaining_time.
    

----------

## **Conceitos Importantes**

-   **Quantum**: Unidade de tempo que cada processo pode utilizar antes de ser pausado.
-   **Fila Circular**: Após a execução de um processo, ele retorna para o final da fila, garantindo que outros processos também possam executar.
-   **Starvation (Inanição)**: Como todos os processos têm chance de execução, o algoritmo Round Robin evita inanição.
-   **Switching**: A troca de contexto entre os processos ocorre de forma controlada e eficiente.

----------

##  **Pontos de Destaque**

-   **Linguagem C**: Foi utilizada a linguagem **C** para facilitar a compreensão de conceitos de controle de processos e semáforos.
-   **Algoritmo de Round Robin**: Um dos algoritmos mais clássicos e conhecidos no estudo de sistemas operacionais.
-   **Uso de Estruturas Simples**: Utiliza um array de processos e mantém um controle claro do estado de cada processo.

----------
