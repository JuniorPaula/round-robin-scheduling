#include<stdio.h>
#include<stdbool.h>

#include "./rr.h"

void round_robin(Process processes[], int n, int quantum) {
  int time = 0;
  bool done;

  while(1) {
    done = true;

    // loop sobre todos os processos
    for (int i = 0; i < n; i++) {
      // Se há tempo restante para esse processo
      if (processes[i].remaining_time > 0) {
        done = false;

        if (processes[i].remaining_time > quantum) {
          // Executa o processo por um quantum
          printf("[PROC][%d] executando...\n", processes[i].id);
          time += quantum;
          processes[i].remaining_time -= quantum;
        } else {
          // Executa o processo pelo tempo restante
          time += processes[i].remaining_time;
          processes[i].remaining_time = 0;
          printf("Processo %d finalizado no tempo %d\n", processes[i].id, time);
        }
      }
    }

    // Se todos os processo foram executados
    if (done) {
      break;
    }
  }
}
