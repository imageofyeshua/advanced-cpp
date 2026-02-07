#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void main() {
  printf("I am a thread with thread ID %d\n", gettid());
}
