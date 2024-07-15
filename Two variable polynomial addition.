#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
  int coeff;
  int exponent;
  struct Node* next;
} Node;
Node* createTerm(int coeff, int exponent) 
{
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->coeff = coeff;
  newNode->exponent = exponent;
  newNode->next = NULL;
  return newNode;
}
void insertTerm(Node** poly, int coeff, int exponent)
{
  Node* newNode = createTerm(coeff, exponent);
  if (*poly == NULL)
  {
    *poly = newNode;
  }
  else
  {
    Node* temp = *poly;
    while (temp->next != NULL) 
    {
      temp = temp->next;
    }
    temp->next = newNode;
   }
 }
void displayPolynomial(Node* poly)
{
  while (poly != NULL)
  {
    printf("%dx^%d", poly->coeff, poly->exponent);
    poly = poly->next;
    if (poly != NULL)
    {
      printf(" + ");
    }
  }
  printf("\n");
}
Node* addPolynomials(Node* poly1, Node* poly2)
{
  Node* result = NULL;
  while (poly1 != NULL && poly2 != NULL)
  {
    if (poly1->exponent > poly2->exponent)
    {
       insertTerm(&result, poly1->coeff, poly1->exponent);
       poly1 = poly1->next;
    }
    else if (poly1->exponent < poly2->exponent)
    {
        insertTerm(&result, poly2->coeff, poly2->exponent);
        poly2 = poly2->next;
    }
    else
    {
      insertTerm(&result, poly1->coeff +
      poly2->coeffpoly1->exponent);
      poly1 = poly1->next;
      poly2 = poly2->next;
    }
  }
  while (poly1 != NULL)
  {
    insertTerm(&result, poly1->coeff, poly1->exponent);
    poly1 = poly1->next;
  }
  while (poly2 != NULL) 
  {
    insertTerm(&result, poly2->coeff, poly2->exponent);
    poly2 = poly2->next;
   }
   return result;
}
void freePolynomial(Node* poly) 
{
  Node* temp;
  while (poly != NULL)
  {
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
  insertTerm(&poly2, 2, 3);
  insertTerm(&poly2, -1, 2);
  insertTerm(&poly2, 4, 1);
  insertTerm(&poly2, 1, 0);
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
