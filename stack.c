#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef struct IntStack
{

int count;
int *data;
}IntStack;

IntStack*createStack(int capacity);
void push (IntStack * pStack,int number);
int pop(IntStack*pStack);
int main(){IntStack*stack=createStack(100);


push (stack,1);
push (stack,2);
int x=pop(stack);
 assert(2==x); 
 x=pop(stack);
 assert(1==x);
 return 0;
}
int pop(IntStack*pStack){
	return pStack->data[--pStack->count];
}
void push(IntStack*pStack,int number){
	pStack->data[pStack->count++]=number; 
}
IntStack*createStack(int capacity){
	IntStack*createStack=malloc(sizeof(IntStack));
	pStack->data=malloc(sizeof(int)*capacity);
	return stack;
	
}
