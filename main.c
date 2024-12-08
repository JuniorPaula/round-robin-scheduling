#include<stdio.h>
#include "./rr.h"

#define MAX_PROC 10

int main() {
  Process processes[MAX_PROC];
  int n;
  int quantum;
  
  printf("Insira o número de processos: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    processes[i].id = i + 1;
    printf("Insira o tempo de execução dos processo %d: ", i + 1);
    scanf("%d", &processes[i].burst_time);
    processes[i].remaining_time = processes[i].burst_time;
  }

  printf("Insira um quantum de tempo: ");
  scanf("%d", &quantum);

  round_robin(processes, n, quantum);

  return 0;
}
