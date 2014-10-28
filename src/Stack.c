#include "Stack.h"
#include <stdlib.h>
#include <memory.h>
struct Stack
{
	int isEmpty;
};

Stack* Stack_Create(int capacity)
{
	Stack* self = malloc(sizeof(Stack));
	memset(self, 0, sizeof(Stack));
  self->isEmpty = 1;
	return self;
}

void Stack_Destroy(Stack* self)
{
    free(self);
}

int Stack_IsEmpty(Stack* self) {
  return self->isEmpty;
}

void Stack_Push(Stack* self, int val) {
  self->isEmpty = 0;
}
