#include <iostream>
using namespace std;
class TreeNode /* Declaring the Class _________ */
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

public:
    TreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void postOrder(TreeNode *root)
{
    if (root == NULL) /* if there is no data in root then return  */
        return;

    postOrder(root->left); /* using this first left side data are stored  */

    postOrder(root->right); /* using this first right side data are stored  */
    cout << root->data << ",";
}
void preOrder(TreeNode *root)
{
    if (root == NULL) /* if there is no data in root then return  */
        return;
    cout << root->data << ",";
    preOrder(root->left); /* using this first left side data are stored  */

    preOrder(root->right); /* using this first right side data are stored  */
}
int max(int a, int b)
{
    if (a >= b)
        return a;
    return b;
}
int height(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return 1 + max(height(root->left), height(root->right));
}

void inOrder(TreeNode *root)
{
    if (root == NULL) /* if there is no data in root then return  */
        return;
    inOrder(root->left); /* using this first left side data are stored  */
    cout << root->data << ",";
    inOrder(root->right); /* using this first right side data are stored  */
}

void addNode(TreeNode **root, int data) /* This Function is used to store the data either left or right  */
{
    if (*root == NULL) /* if pointer root is NULL then adding the first data  */
    {
        TreeNode *newnode = new TreeNode(data);
        *root = newnode;
        newnode->left = NULL;  /* if pointer root is NULL then left side has no data  */
        newnode->right = NULL; /* if pointer root is NULL then right side has no data  */
        return;
    }
    if (data <= (*root)->data)         /* if data which have to add is less than root data   */
        addNode(&(*root)->left, data); /* then it will be added to left side in a tree  */
    else
        addNode(&(*root)->right, data); /* if data which have to add is greater than root data   */
} /* then it will be added to right side in a tree  */
int main()
{
    int x;
    cout << "Enter the Number : ";
    cin >> x;
    TreeNode *root = new TreeNode(x); /*The value entered will be added in the Root */

    for (int i = 10; i >= 7; i--)
    {
        cout << "Enter the Number : "; // Asking the value to add to the tree
        cin >> x;
        addNode(&root, x); /* Adding the value to the tree  */
    }
    inOrder(root); // printing the orderedtree
    preOrder(root);

    int y = height(root);
    cout <<"\n Height = "<< y << endl;

    return 0;
}
