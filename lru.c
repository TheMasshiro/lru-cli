#include <stdio.h>

// Hash table
typedef struct cache {
  int value;
  char *key;
} cache;

int put(int key, int value) { return 0; }

int get(unsigned int key) { return 0; }

int LRUCache(int capacity) { return 0; }

int main(int argc, char *argv[]) {
  printf("You have entered %d arguments:\n", argc);

  for (int i = 0; i < argc; i++) {
    printf("%s\n", argv[i]);
  }
  return 0;
}
