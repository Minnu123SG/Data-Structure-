#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
struct Node
{
  char data;
  struct Node* next;
  struct Node* prev;
};
struct Node* insertAtEnd(struct Node* head, char value)
{
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = value;
  newNode->next= NULL;
  if (head == NULL)
  {
    newNode->prev = NULL;
    return newNode;
  }
   struct Node* current = head;
   while (current->next != NULL)
   {
     current = current->next;
   }
    current->next = newNode;
    newNode->prev = current;
    return head;
}
bool isPalindrome(struct Node* head)
{
  struct Node* forward = head;
  struct Node* backward = NULL;
  while (forward->next != NULL)
  {
    forward = forward->next;
  }
   backward = forward;
   while (head != NULL)
   {
     if (head->data != backward->data)
     {
         return false;
     }
     head = head->next;
     backward = backward->prev;
  }
  return true;
}
void display(struct Node* head)
{
   struct Node* current = head;
   while (current != NULL)
   {
      printf("%c", current->data);
      current = current->next;
   }
   printf("\n");
}
void freeList(struct Node* head)
{
   struct Node* current = head;
   while (current != NULL)
   {
      struct Node* next = current->next;
      free(current);
      current = next;
   }
}
int main()
{
   char str[100];
   printf("Enter a string: ");
   scanf("%s", str);
   struct Node* head = NULL;
   for (int i= 0;i < strlen(str); i++)
   {
      head = insertAtEnd(head, str[i]);
   }
   printf("Doubly Linked List: ");
   display(head);
   if (isPalindrome(head))
   {
     printf("The string is a palindrome.\n");
   }
   else
   {
      printf("The string is not a palindrome.\n");
   }
   freeList(head);
   return 0;
}
