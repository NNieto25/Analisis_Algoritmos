#include <iostream>
#include "tree.h"
using namespace std;

template <class T>
void printLevel(int level, node<T> *tree);

int main(){
    //tree creation
    node<int> *tree = new node<int>(9);
    // Left subTree
    tree->left = new node<int>(5);
    tree->left->left = new node<int>(3);
    tree->left->left->right = new node<int>(4);
    //Right subTree
    tree->right = new node<int>(13);
    tree->right->right = new node<int>(19);
    tree->right->left = new node<int>(11);
    tree->right->left->left = new node<int>(10);
    tree->right->left->right = new node<int>(12);
    
    //printing first level
    printLevel(0, tree); cout << endl;
    //printing second level
    printLevel(1, tree); cout << endl;
    //printing third level
    printLevel(2, tree); cout << endl;

    return 0;
}

template <class T>
void printLevel(int level, node<T> *tree){
    if (tree)
    {
        if (level == 0)
        {
            cout << tree->data << " ";
        }
        else if(level > 0){
            printLevel(level -1,tree->left);
            printLevel(level -1, tree->right);
        }
    }
}