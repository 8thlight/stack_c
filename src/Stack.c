#include "Stack.h"
#include <stdlib.h>
#include <memory.h>

struct Stack
{
  int count;
  int * data;
};

Stack* Stack_Create(int capacity)
{
  Stack* self = malloc(sizeof(Stack));
  memset(self, 0, sizeof(Stack));
  self->data = calloc(capacity, sizeof(int));
  return self;
}

void Stack_Destroy(Stack* self)
{
  free(self->data);
  free(self);
}

int Stack_isEmpty(Stack* self)
{
  return self->count == 0;
}

void Stack_push(Stack* self, int i)
{
  self->data[self->count] = i;
  self->count++;
}

void Stack_pop(Stack* self)
{
  self->count--;
}

int Stack_top(Stack* self)
{
  return self->data[self->count - 1];
}
