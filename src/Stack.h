#ifndef Stack_H
#define Stack_H

typedef struct Stack Stack;

Stack* Stack_Create(int);
void Stack_Destroy(Stack*);
int Stack_IsEmpty(Stack*);
void Stack_Push(Stack*, int);

#endif // Stack_H
