#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/syscall.h>

int main(int argc, char *argv[]) {
  printf("I am a thread with thread ID %d\n", gettid());
  printf("Thread id %ld\n", syscall(SYS_gettid));
  /* Could also pass __NR_gettid */
  return 0;
}
