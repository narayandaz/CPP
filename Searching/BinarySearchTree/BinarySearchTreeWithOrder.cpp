#include <iostream>
#include <process.h>

using namespace std;

struct node {
  int info;
  node *left, *right;
};

class BINTREE {
  node *tree;

public:
  BINTREE() { tree = NULL; }
  struct node *makeTree(node *tree, int num);
  void preOrder(node *);
  void inOrder(node *);
  void postOrder(node *);
};

struct node *BINTREE::makeTree(node *tree, int num) {

  if (tree == NULL) {
    tree = new node;
    tree->left = tree->right = NULL;
    tree->info = num;
  } else if (num == tree->info)
    cout << "Duplicate Key\n";
  else if (num < tree->info)
    tree->left = makeTree(tree->left, num);
  else
    tree->right = makeTree(tree->right, num);

  return tree;
}

void BINTREE::preOrder(node *tree) {

  if (tree != NULL) {
    cout << " " << tree->info;
    preOrder(tree->left);
    preOrder(tree->right);
  }
}

void BINTREE::inOrder(node *tree) {

  if (tree != NULL) {
    inOrder(tree->left);
    cout << " " << tree->info;
    inOrder(tree->right);
  }
}

void BINTREE::postOrder(node *tree) {

  if (tree != NULL) {
    postOrder(tree->left);
    postOrder(tree->right);
    cout << " " << tree->info;
  }
}

int main() {
  BINTREE b;
  int ch, ele;
  node *root = NULL;
  cout << "~~~~~ BINARY  SEARCH TREE ~~~~~ \n";
  cout << "1.Insert\n";
  cout << "2.Pre-Order\n";
  cout << "3.In-Order\n";
  cout << "4.Post-Order\n";
  cout << "5.Quit\n";

  for (;;) {
    cout << "\nEnter choice :";
    cin >> ch;
    switch (ch) {
    case 1:
      cout << "Enter the element : ";
      cin >> ele;
      root = b.makeTree(root, ele);
      break;
    case 2:
      cout << "Pre-Order : ";
      b.preOrder(root);
      cout << endl;
      break;
    case 3:
      cout << "In-Order : ";
      b.inOrder(root);
      cout << endl;
      break;
    case 4:
      cout << "Post-Order : ";
      b.postOrder(root);
      cout << endl;
      break;
    case 5:
      ch = 0;
      break;
    default:
      cout << "Invalid Choice\n";
    }
  }

  return 0;
}
