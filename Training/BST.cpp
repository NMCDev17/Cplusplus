#include <iostream>
using namespace std;

class BST
{
    int data;
    BST *left;
    BST *right;

public:
    BST();
    BST(int val);
    BST *insert(BST *, int);
    void traverse(BST *);
    BST *search(BST *, int);
    BST *remove(BST *, int);
};

BST::BST()
    : data(0), left(NULL), right(NULL)
{
}

BST::BST(int val)
{
    this->data = val;
    this->left = NULL;
    this->right = NULL;
}

BST *BST::insert(BST *root, int val)
{
    if (!root)
    {
        return new BST(val);
    }
    else
    {
        if (root->data < val)
        {
            root->right = insert(root->right, val);
        }
        else
        {
            root->left = insert(root->left, val);
        }
    }
    return root;
}

void BST::traverse(BST *root)
{
    if (!root)
    {
        return;
    }
    cout << root->data << " ";
    traverse(root->left);
    traverse(root->right);
}

BST *BST::search(BST *root, int val)
{
    if (root == NULL || root->data == val)
    {
        return root;
    }
    if (val > root->data)
    {
        return search(root->right, val);
    }
    return search(root->left, val);
}
int main()
{
    BST b;
    BST *root = NULL;
    int n;
    cin >> n; // so nut trong cay;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        root = b.insert(root, x);
    }
    b.traverse(root);
    // cout << endl;
    // int val;
    // cin >> val;
    // BST *result = b.search(root, val);
    // b.traverse(result);
    return 0;
}