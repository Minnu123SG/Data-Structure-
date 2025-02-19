#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int coefficient;
  int exponent;
  struct Node* next;
};
struct Node* createNode(int coeff, int exp)
{
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  if (newNode == NULL)
  {
    printf("Memory allocation error\n");
    exit(1);
  }
   newNode->coefficient = coeff;
   newNode->exponent = exp;
   newNode->next = NULL;
   return newNode;
}
void insertTerm(struct Node** poly, int coeff, int exp)
{
   struct Node* newNode = createNode(coeff, exp);
   if (*poly == NULL)
   {
    *poly = newNode;
   }
   else
   {
     struct Node* current = *poly;
     while (current->next != NULL)
     {
      current = current->next;
     }
     current->next = newNode;
   }
}
struct Node* multiplyPolynomials(struct Node* poly1, struct Node*poly2)
{
  struct Node* result = NULL;
  while (poly1 != NULL)
  {
     struct Node* currentPoly2 = poly2;
     while (currentPoly2 != NULL)
     {
      int coeff = poly1->coefficient * currentPoly2->coefficient;
      int exp = poly1->exponent + currentPoly2->exponent;
      insertTerm(&result, coeff, exp);
      currentPoly2 = currentPoly2->next;
     }
     poly1 = poly1->next;
   }
   return result;
}
void displayPolynomial(struct Node* poly)
{
   while (poly != NULL)
   {
      printf("%dx^%d", poly->coefficient, poly->exponent);
      poly = poly->next;
      if (poly != NULL)
      {
        printf(" + ");
      }
   }
   printf("\n");
}
void freePolynomial(struct Node* poly)
{
  struct Node* current = poly;
  struct Node* next;
  while (current != NULL)
  {
    next = current->next;
    free(current);
   current = next;
  }
}
int main()
{
  struct Node* poly1 = NULL;
  struct Node* poly2 = NULL;
  struct Node* result = NULL;
  insertTerm(&poly1, 2, 2);
  insertTerm(&poly1, 3, 1);
  insertTerm(&poly1, 4, 0);
  insertTerm(&poly2, 1, 1);
  insertTerm(&poly2, 2, 0);
  printf("Polynomial 1: ");
  displayPolynomial(poly1);
  printf("Polynomial 2: ");
  displayPolynomial(poly2);
  result = multiplyPolynomials(poly1, poly2);
  printf("Result of multiplication: ");
  displayPolynomial(result);
  freePolynomial(poly1);
  freePolynomial(poly2);
  freePolynomial(result);
  return 0;
}
