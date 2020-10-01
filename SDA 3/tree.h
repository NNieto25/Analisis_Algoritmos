#pragma once
#include <iostream>
template <class T>
struct node
{
    T data;
    node *left, *right;
    node(){}
    node(T _data): data(_data){left = right = nullptr;}
};


template <class T>
void preorder(node<T> *tree){
    if (tree){
        std::cout << (tree)->data << " ";
        preorder((tree)->left);
        preorder((tree)->right);
    }
} 

template <class T>
void postorder(node<T> *tree){
    if (tree){
        postorder((tree)->left);
        postorder((tree)->right);
        std::cout << (tree)->data << " ";
    }
} 

template <class T>
void inorder(node<T> *tree){
    if (tree){
        inorder((tree)->left);
        std::cout << (tree)->data << " ";
        inorder((tree)->right);
    }
} 