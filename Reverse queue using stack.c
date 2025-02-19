#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node* next;
};
struct Queue
{
  struct Node* front;
  struct Node* rear;
};
struct Stack
{
  struct Node* top;
};
struct Node* newNode(int data)
{
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = data;
  temp->next = NULL;
  return temp;
}
struct Queue* createQueue()
{
   struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
   queue->front = queue->rear = NULL;
   return queue;
}
struct Stack* createStack()
{
   struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
   stack->top = NULL;
   return stack;
}
void enqueue(struct Queue* queue, int data)
{
   struct Node* temp = newNode(data);
   if (queue->rear == NULL)
   {
     queue->front = queue->rear = temp;
     return;
   }
    queue->rear->next = temp;
    queue->rear = temp;
}
int dequeue(struct Queue* queue)
{
   if (queue->front == NULL)
   return -1;
   int data = queue->front->data;
   struct Node* temp = queue->front;
   queue->front = temp->next;
   if (queue->front == NULL)
   queue->rear = NULL;
   free(temp);
   return data;
}
void push(struct Stack* stack, int data)
{
   struct Node* temp = newNode(data);
   temp->next = stack->top;
   stack->top = temp;
}
int pop(struct Stack* stack)
{
   if (stack->top == NULL)
   return -1;
   int data = stack->top->data;
   struct Node* temp = stack->top;
   stack->top = temp->next;
   free(temp);
   return data;
}
void reverseQueueUsingStack(struct Queue* queue)
{
  struct Stack* stack = createStack();
  while (queue->front != NULL)
  {
    int frontElement = dequeue(queue);
    push(stack, frontElement);
  }
  while (stack->top != NULL)
  {
    int topElement = pop(stack);
    enqueue(queue, topElement);
  }
  free(stack);
}
void printQueue(struct Queue* queue)
{
   struct Node* temp = queue->front;
   while (temp != NULL) {
   printf("%d ", temp->data);
   temp = temp->next;
 }
 printf("\n");
}
int main()
{
  struct Queue* myQueue = createQueue();
  enqueue(myQueue, 1);
  enqueue(myQueue, 2);
  enqueue(myQueue, 3);
  enqueue(myQueue, 4);
  enqueue(myQueue, 5);
  printf("Original Queue: ");
  printQueue(myQueue);
  reverseQueueUsingStack(myQueue);
  printf("Reversed Queue: ");
  printQueue(myQueue);
  return 0;
}
