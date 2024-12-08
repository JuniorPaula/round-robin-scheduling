#include<stdio.h>

typedef struct {
  int id;
  int burst_time;
  int remaining_time;
} Process;

void round_robin(Process processes[], int n, int quantum);
