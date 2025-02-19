#include <stdio.h>
void bubbleSort(int *start, int size)
{
  int *ptr, *last_ptr;
  int temp;
  last_ptr= start+ size- 1;
  for (; start< last_ptr; last_ptr--)
  {
    for (ptr= start; ptr< last_ptr; ptr++)
    {
      if (*ptr> *(ptr+ 1))
      {
          temp= *ptr;
          *ptr= *(ptr+ 1);
          *(ptr+ 1)= temp;
      }
   }
 }
}
int main()
{
  int arr[]= {64, 34, 25, 12, 22,11, 90};
  int n= sizeof(arr)/ sizeof(arr[0]);
  printf("Original array: ");
  for (int i= 0;i< n; i++)
  {
    printf("%d ", arr[i]);
  }
  bubbleSort(arr, n);
  printf("\nSorted array: ");
  for (int i= 0;i< n; i++)
  {
    printf("%d ", arr[i]);
  }
return 0;
}
