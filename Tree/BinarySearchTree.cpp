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
    BST *Insert(BST *, int);
    void Traverse(BST *);
    BST *Delete(BST *, int);
    BST *Search(BST *, int);
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

BST *BST::Insert(BST *root, int val)
{
    if (!root)
    {
        // chen vao nut goc nut root la null;
        return new BST(val);
    }

    if (val > root->data)
    {
        // neu nut muon chen lon hon root thi ta chen qua phai;
        root->right = Insert(root->right, val);
    }
    else if (val < root->data)
    {
        // neu nut muon chen nho hon root thi ta chen qua trai;
        root->left = Insert(root->left, val);
    }
    // tra ve nut goc cua cay;
    return root;
}

void BST::Traverse(BST *root)
{
    if (!root)
    {
        return;
    }
    // Duyet theo chieu truoc;
    cout << root->data << " ";
    Traverse(root->left);
    Traverse(root->right);
}

BST *BST::Search(BST *root, int val)
{
    if (root == NULL || root->data == val)
    {
        return root;
    }
    if (root->data < val)
        return Search(root->right, val);
    return Search(root->left, val);
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
        root = b.Insert(root, x);
    }
    b.Traverse(root);
    cout << endl;
    int val;
    cin >> val;
    BST *result = b.Search(root, val);
    b.Traverse(result);
    return 0;
}