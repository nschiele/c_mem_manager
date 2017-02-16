//Nicola Wernecke
//Nathan Schiele

#ifndef MEM_IMP_H
#define MEM_IMP_H


struct free_block {
  uintptr_t size;
  struct free_block *next;
};

void check_heap();

#endif
