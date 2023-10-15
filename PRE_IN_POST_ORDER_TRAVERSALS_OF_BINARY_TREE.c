#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node *left;
    int data;
    char ch;
    struct node *right;
};
// Function to create nodes for integer
struct node *CreateNodeInteger(int value)
{
    struct node *NewNode;
    NewNode = (struct node *)malloc(sizeof(struct node));
    NewNode->left = NULL;
    NewNode->data = value;
    NewNode->right = NULL;
    return NewNode;
}
// Function to create nodes for characters
struct node *CreateNodeCharacter(char alphabet)
{
    struct node *NewNode;
    NewNode = (struct node *)malloc(sizeof(struct node));
    NewNode->left = NULL;
    NewNode->ch = alphabet;
    NewNode->right = NULL;
    return NewNode;
}
// Function for PREORDER TRAVERSAL with Integers
void PreOrderInteger(struct node *root)
{
    if(root != NULL)
    {
        printf("%d ",root->data);
        PreOrderInteger(root->left);
        PreOrderInteger(root->right);
    }
}
// Function for INORDER TRAVERSAL with Integers
void InOrderInteger(struct node *root)
{
    if(root != NULL)
    {
        InOrderInteger(root->left);
        printf("%d ",root->data);
        InOrderInteger(root->right);
    }
}
// Function for POSTORDER TRAVERSAL with Integers
void PostOrderInteger(struct node *root)
{
    if(root != NULL)
    {
        PostOrderInteger(root->left);
        PostOrderInteger(root->right);
        printf("%d ",root->data);
    }
}
// Function for PREORDER TRAVERSAL with Characters or Alphabets
void PreOrderCharacter(struct node *root)
{
    if(root != NULL)
    {
        printf("%c ",root->ch);
        PreOrderCharacter(root->left);
        PreOrderCharacter(root->right);
    }
}
// Function for INORDER TRAVERSAL with Characters or Alphabets
void InOrderCharacter(struct node *root)
{
    if(root != NULL)
    {
        InOrderCharacter(root->left);
        printf("%c ",root->ch);
        InOrderCharacter(root->right);
    }
}
// Function for POSTORDER TRAVERSAL with Characters or Alphabets
void PostOrderCharacter(struct node *root)
{
    if(root != NULL)
    {
        PostOrderCharacter(root->left);
        PostOrderCharacter(root->right);
        printf("%c ",root->ch);
    }
}
// Main function
int main()
{
    // Creating the nodes with Integers
    // This is a different tree from the next tree with Characters or Alphabets
    struct node *int_1 = CreateNodeInteger(1);
    struct node *int_2 = CreateNodeInteger(2);
    struct node *int_3 = CreateNodeInteger(3);
    struct node *int_4 = CreateNodeInteger(4);
    struct node *int_5 = CreateNodeInteger(5);
    struct node *int_6 = CreateNodeInteger(6);
    struct node *int_7 = CreateNodeInteger(7);
    struct node *int_8 = CreateNodeInteger(8);
    struct node *int_9 = CreateNodeInteger(9);
    struct node *int_10 = CreateNodeInteger(10);
    struct node *int_11 = CreateNodeInteger(11);
    struct node *int_12 = CreateNodeInteger(12);
    // Now linking the nodes to construct the tree
    int_1->left = int_2;
    int_1->right = int_3;
    int_2->left = int_4;
    int_2->right = int_5;
    int_3->left = int_6;
    int_3->right = int_7;
    int_4->left = int_8;
    int_5->left = int_9;
    int_5->right = int_10;
    int_6->left = int_11;
    int_7->right = int_12;
    // The tree with Integers will look like this:-
    //            1
    //          /   \          /
    //         /     \         /
    //        /       \        /
    //       2         3       
    //      / \       / \      /
    //     4   5     6   7     
    //    /   / \   /     \    /
    //   8   9  10 11     12  
    // Now printing the PREORDER TRAVERSAL with Integers
    printf("\nThe PreOrder traversal of the binary tree with integers is :\n");
    PreOrderInteger(int_1);
    printf("\n");
    // Now printing the INORDER TRAVERSAL with Integers
    printf("The InOrder traversal of the binary tree with integers is :\n");
    InOrderInteger(int_1);
    printf("\n");
    // Now printing the POSTORDER TRAVERSAL with Integers
    printf("The PostOrder traversal of the binary tree with integers is :\n");
    PostOrderInteger(int_1);
    printf("\n");
    printf("\n");

    // Creating the nodes with Characters or Alphabets
    // This is a different tree from the previous tree with Integers
    struct node *alphabet_1 = CreateNodeCharacter('A');
    struct node *alphabet_2 = CreateNodeCharacter('B');
    struct node *alphabet_3 = CreateNodeCharacter('C');
    struct node *alphabet_4 = CreateNodeCharacter('D');
    struct node *alphabet_5 = CreateNodeCharacter('E');
    struct node *alphabet_6 = CreateNodeCharacter('F');
    struct node *alphabet_7 = CreateNodeCharacter('G');
    struct node *alphabet_8 = CreateNodeCharacter('H');
    struct node *alphabet_9 = CreateNodeCharacter('I');
    struct node *alphabet_10 = CreateNodeCharacter('J');
    struct node *alphabet_11 = CreateNodeCharacter('K');
    struct node *alphabet_12 = CreateNodeCharacter('L');
    // Now linking the nodes to construct the tree
    alphabet_1->left = alphabet_2;
    alphabet_1->right = alphabet_3;
    alphabet_2->left = alphabet_4;
    alphabet_2->right = alphabet_5;
    alphabet_3->left = alphabet_6;
    alphabet_3->right = alphabet_7;
    alphabet_4->left = alphabet_8;
    alphabet_4->right = alphabet_9;
    alphabet_6->left = alphabet_10;
    alphabet_6->right = alphabet_11;
    alphabet_7->right = alphabet_12;
    // The tree with Alphabets will look like this:-
    //            A
    //          /   \          /
    //         /     \         /
    //        /       \        /
    //       B         C       
    //      / \       / \      /
    //     D   E     F   G     
    //    / \       / \   \    /
    //   H   I     J   K   L  
    // Now printing the PREORDER TRAVERSAL with Characters or Alphabets
    printf("The PreOrder traversal of the binary tree with alphabets is :\n");
    PreOrderCharacter(alphabet_1);
    printf("\n");
    // Now printing the INORDER TRAVERSAL with Characters or Alphabets
    printf("The InOrder traversal of the binary tree with alphabets is :\n");
    InOrderCharacter(alphabet_1);
    printf("\n");
    // Now printing the POSTORDER TRAVERSAL with Characters or Alphabets
    printf("The PostOrder traversal of the binary tree with alphabets is :\n");
    PostOrderCharacter(alphabet_1);
    printf("\n");

    return 0;

}
