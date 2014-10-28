#ifndef Stack_H
#define Stack_H

typedef struct Stack Stack;

Stack* Stack_Create(int);
void Stack_Destroy(Stack*);
int Stack_Empty(Stack*);

#endif // Stack_H
