#ifndef HEAP_H
#define HEAP_H

// a min heap

typedef unsigned long long heap_key_t;
typedef void *heap_value_t;
#define HEAP_KEY_FORMAT "%llu"

typedef struct {
  heap_key_t key;
  heap_value_t value;
} heap_node_t;

typedef struct {
  heap_node_t *data;
  int size;
  int capacity;
} heap_t;

heap_t *heap_create(int capacity);

void heap_free(heap_t *hp);

unsigned int heap_size(heap_t *hp);

void heap_insert(heap_t *hp, heap_key_t ky, heap_value_t dt);

heap_value_t heap_remove_min(heap_t *hp);

void heap_print(heap_t *hp);

#endif
