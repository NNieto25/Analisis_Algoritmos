#include <iostream>
#include "tree.h"
using namespace std;

template<class T>
int size(node<T> *);

int main(){
    //Tree creation 
    node<char> *tree = new node<char>('G');
    
    tree->left = new node<char>('E');
    tree->left->left = new node<char>('A');
    tree->left->left->left = new node<char>('I');
    tree->left->left->right = new node<char>('B');

    tree->right = new node<char>('M');
    tree->right->left = new node<char>('C');
    tree->right->left->left = new node<char>('L');
    tree->right->left->left->right = new node<char>('D');
    tree->right->left->right = new node<char>('F');
    tree->right->right = new node<char>('K');
    tree->right->right->right = new node<char>('J');
    tree->right->right->right->left = new node<char>('H');

    cout<< "Amount of nodes: " << size(tree) << endl;
    return 0;
}
template <class T>
int size(node<T> *tree){
    return tree?(1 + size(tree->left) + size(tree->right)) : 0;
}