#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int coefficient;
  int exponent;
  struct Node* next;
};
typedef struct Node Node;
Node* createTerm(int coefficient, int exponent)
{
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->coefficient = coefficient;
  newNode->exponent = exponent;
  newNode->next = NULL;
  return newNode;
}
void insertTerm(Node** poly, int coefficient, int exponent)
{
  Node* newTerm = createTerm(coefficient, exponent);
  if (*poly == NULL)
  {
    *poly = newTerm;
  }
  else 
  {
    Node* current = *poly;
    while (current->next != NULL)
    {
       current = current->next;
     }
     current->next = newTerm;
    }
}
Node* addPolynomials(Node* poly1, Node* poly2)
{
   Node* result = NULL;
   while (poly1 != NULL && poly2 != NULL)
   {
     if (poly1->exponent > poly2->exponent)
     {
       insertTerm(&result, poly1->coefficient, poly1->exponent);
       poly1 = poly1->next;
     }
     else if (poly1->exponent < poly2->exponent)
     {
       insertTerm(&result, poly2->coefficient, poly2->exponent);
       poly2 = poly2->next;
     }
     else
     {
       insertTerm(&result, poly1->coefficient + poly2->coefficient,
       poly1->exponent);
       poly1 = poly1->next;
       poly2 = poly2->next;
     }
   }
   while (poly1 != NULL)
   {
    insertTerm(&result, poly1->coefficient, poly1->exponent);
    poly1 = poly1->next;
    }
    while (poly2 != NULL)
    {
      insertTerm(&result, poly2->coefficient, poly2->exponent);
      poly2 = poly2->next;
    }
    return result;
}
void displayPolynomial(Node* poly)
{
  while (poly != NULL)
  {
    printf("%dx^%d ", poly->coefficient, poly->exponent);
    if (poly->next != NULL)
    {
        printf("+ ");
    }
    poly = poly->next;
   }
   printf("\n");
}
void freePolynomial(Node* poly) 
{
   Node* temp;
   while (poly != NULL) {
   temp = poly;
   poly = poly->next;
   free(temp);
  }
}
int main() 
{
   Node* poly1 = NULL;
   Node* poly2 = NULL;
   Node* result = NULL;
   insertTerm(&poly1, 3, 2);
   insertTerm(&poly1, 2, 1);
   insertTerm(&poly1, 5, 0);
   insertTerm(&poly2, 4, 3);
   insertTerm(&poly2, -1, 2);
   insertTerm(&poly2, 2, 0);
   printf("Polynomial 1: ");
   displayPolynomial(poly1);
   printf("Polynomial 2: ");
   displayPolynomial(poly2);
   result = addPolynomials(poly1, poly2);
   printf("Sum: ");
   displayPolynomial(result);
   freePolynomial(poly1);
   freePolynomial(poly2);
   freePolynomial(result);
   return 0;
}
