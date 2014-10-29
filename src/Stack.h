#ifndef D_Stack_H
#define D_Stack_H

typedef struct Stack Stack;

Stack* Stack_Create(int capacity);
void Stack_Destroy(Stack*);

#endif  // D_Stack_H
