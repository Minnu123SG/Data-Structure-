#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int key;
  struct Node* left;
  struct Node* right;
};
struct Node* createNode(int key)
{
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->key = key;
  newNode->left = newNode->right = NULL;
  return newNode;
}
struct Node* insert(struct Node* root, int key)
{
  if (root == NULL)
  {
     return createNode(key);
  }
  if (key < root->key)
  {
     root->left = insert(root->left, key);
  }
   else if (key > root->key)
   {
     root->right = insert(root->right, key);
   }
   return root;
}
void inorderTraversal(struct Node* root)
{
  if (root != NULL)
  {
     inorderTraversal(root->left);
     printf("%d ", root->key);
     inorderTraversal(root->right);
   }
}
void preorderTraversal(struct Node* root)
{
  if (root != NULL)
  {
   printf("%d ", root->key);
   preorderTraversal(root->left);
   preorderTraversal(root->right);
  }
}
void postorderTraversal(struct Node* root)
{
  if (root != NULL)
  {
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->key);
  }
}
struct Node* minValueNode(struct Node* node)
{
  struct Node* current = node;
  while (current != NULL && current->left != NULL)
  {
    current = current->left;
  }
return current;
}
struct Node* deleteNode(struct Node* root, int key)
{
  if (root == NULL)
  {
    return root;
  }
  if (key < root->key)
  {
    root->left = deleteNode(root->left, key);
  }
  else if (key > root->key)
  {
     root->right = deleteNode(root->right, key);
  }
  else
  {
   if (root->left == NULL)
   {
     struct Node* temp = root->right;
     free(root);
     return temp;
  }
  else if (root->right == NULL)
  {
    struct Node* temp = root->left;
    free(root);
    return temp;
  }
   struct Node* temp = minValueNode(root->right);
   root->key = temp->key;
   root->right = deleteNode(root->right, temp->key);
  }
   return root;
}
void freeTree(struct Node* root)
{
  if (root != NULL)
  {
    freeTree(root->left);
    freeTree(root->right);
     free(root);
  }
}
int main()
{
   struct Node* root = NULL;
   int choice, keyToDelete, keyToInsert;
   do
   {
     printf("\nBinary Search Tree Operations:\n");
     printf("1. Insert a new node\n");
     printf("2. Inorder Traversal\n");
     printf("3. Preorder Traversal\n");
     printf("4. Postorder Traversal\n");
     printf("5. Delete a node\n");
     printf("6. Exit\n");
     printf("Enter your choice (1-6): ");
     scanf("%d", &choice);
     switch (choice)
     {
     case 1:
        printf("Enter the key for the new node: ");
        scanf("%d", &keyToInsert);
        root = insert(root, keyToInsert);
        printf("Node with key %d inserted.\n", keyToInsert);
        break;
     case 2:
         printf("Inorder Traversal: ");
         inorderTraversal(root);
         printf("\n");
          break;
    case 3:
        printf("Preorder Traversal: ");
        preorderTraversal(root);
        printf("\n");
        break;
    case 4:
        printf("Postorder Traversal: ");
        postorderTraversal(root);
        printf("\n");
        break;
    case 5:
        printf("Enter the key of the node to delete: ");
         scanf("%d", &keyToDelete);
         root = deleteNode(root, keyToDelete);
         printf("Node with key %d deleted.\n", keyToDelete);
          break;
      case 6:
          printf("Exiting program.\n");
          break;
          default:
          printf("Invalid choice. Please enter a number between 1and 6.\n");
        
       }
   }
    while (choice != 6);
    freeTree(root);
    return 0;
}
