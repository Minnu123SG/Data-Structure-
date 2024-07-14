#include
#define MAX_VAL 101
struct
{
  int row; int col;
  int val;
}
sparse[MAX_VAL];
void tripletrep(int arr[1000][1000], int n, int m);
void print(int k)
{
  printf("The Triplet representation is\n");
  int i, j;
  for (i = 0; i < k; i++)
  {
    printf("%d %d %d \n", sparse[i].row, sparse[i].col, sparse[i].val);
  }
}
int main()
{
  int i, j;
  printf("Enter the Order of the Sparse array: ");
  int n, m; scanf("%d %d", &n, &m); int arr[1000][1000];
  printf("Enter the elements: ");
  for (i = 0; i < n; i++)
  {
   for (j = 0; j < m; j++)
   {
     scanf("%d", &arr[i][j]);
   }
   tripletrep(arr, n, m);
   void tripletrep(int arr[1000][1000], int n, int m)
   {
      int i, j, k = 1;
      for (i = 0; i < n; i++)
      for (j = 0; j < m; j++)
      {
        if (arr[i][j] != 0)
        {
          sparse[k].row = i;
          sparse[k].col = j;
          sparse[k].val = arr[i][j]; k++;
         }
      }
       sparse[0].row = i;
       sparse[0].col = j;
       sparse[0].val = k - 1;
       print(k);
}
#include
#define MAX_VAL 101
struct triple
{
  int row;
  int col; int val;
}
sparse[MAX_VAL];
void tripletrep(int arr[1000][1000], int n, int m);
void print(int k)
{
  printf("The Triplet representation is\n");
  int i, j;
  for (i = 0; i < k; i++)
  {
     printf("%d %d %d \n", sparse[i].row, sparse[i].col, sparse[i].val);
  }
 }
 printf("Enter the Order of the Sparse array: ");
int main()
{
  int i, j;
  int n, m;
  scanf("%d %d", &n, &m);
  int arr[1000][1000];
  printf("Enter the elements: ");
  for (i= 0;i< n; i++)
  {
    for (j= 0;j< m; j++)
    {
       scanf("%d", &arr[i][j]); }
       tripletrep(arr, n, m);
    }
void tripletrep(int arr[1000][1000], int n, int m)
{
  int i, j,k= 1;
  for (i= 0;i< n; i++)
  for (j= 0;j< m; j++)
  {
    if (arr[i][j] != 0)
    {
      sparse[k].row= i;
      sparse[k].col= j;
      sparse[k].val= arr[i][j];
      K++; 
   }
  }
  sparse[0].row= i;
  sparse[0].col= j;
  sparse[0].val=k- 1;
  print(k); 
}
#include
#define MAX_VAL 101
struct triple
{
   int row; int col; int val;
}
a[MAX_VAL], b[MAX_VAL], c[MAX_VAL];
void print(int n)
{
  int i, j;
  for (i = 0; i <= n; i++)
  {
     printf("%d %d %d \n", c[i].row, c[i].col, c[i].val);
  }
}
void add(int n, int m)
{
  int i, j, k;
  if (a[0].row == b[0].row && a[0].col == b[0].col)
  {
    c[0].row = a[0].row;
    c[0].col = a[0].col;
    i = j = k = 1;
    while (i <= n && j <= m)
    {
     if (a[i].row == b[j].row && a[i].col == b[j].col)
      {
          c[k].row = a[i].row;
          c[k].col = a[i].col;
          c[k].val = a[i].val + b[j].val;
          k++; i++; j++;
       }
        else if (a[i].row == b[j].row)
        {
         if (a[i].col < b[j].col)
         {
           c[k].row = a[i].row;
           c[k].col = a[i].col;
           c[k].val=a[i].val;
           k++; i++;
           c[k].row= b[j].row;
           c[k].col= b[j].col;
           c[k].val= b[j].val;
           k++; j++;
           else if (a[i].row< b[i].row)
           {
             c[k].row = a[i].row;
             c[k].col= a[i].col;
             c[k].val= a[i].val;
             k++;i++;
             c[k].row = b[j].row;
             c[k].col = b[j].col;
             c[k].val = b[j].val;
              k++; j++; 
     }
  }
  while (i <= n) 
  {
    c[k].row = a[i].row;
    c[k].col=a[i].col;
    c[k].val=a[i].val;
    k++;
    i++;
  }
  while (j <= m)
  {
    c[k].row= b[j].row;
    c[k].col= b[j].col; 
    c[k].val= b[j].val;
     k++; j++; 
  }
  c[0].val=k- 1;
 }
  printf("The Sum triple sparse matrix is: \n"); print(k - 1);
}
int main()
{
  printf("Enter the number of non negative terms in the sparse matrix1: ");
  int n;
  scanf("%d", &n);
  printf("Enter the triple representaion of the sparse matrix1: ");
  int i;
  for (i = 0; i <= n; i++)
  {
    scanf("%d %d %d", &a[i].row, &a[i].col, &a[i].val);
  }
   printf("Enter the number of non negative terms in the sparse matrix2: ");
   int m;
   scanf("%d", &m);
   printf("Enter the triple representaion of the sparse matrix2: ");
   for (i = 0; i <= m; i++)
   {
     scanf("%d %d %d", &b[i].row, &b[i].col, &b[i].val);
   }
   add(n, m);
   return 0;
}
