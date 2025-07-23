#include<stdio.h>
#include<stdlib.h>

struct tree{
    int key;
    struct node *right,*left;
} ;

struct tree *create(int data){
    struct tree *tmp = (struct tree*) malloc (sizeof(struct tree));
    tmp->key = data;
    tmp->left = tmp->right = NULL;
    return tmp;
}

struct tree *insert(struct tree *root,int data){
    if(root==NULL){
        create(data);
    }
    else if(root->key<data){
        root->right = insert(root->right,data);
    }
    else{
        root->left = insert(root->left,data);
    }
    return root;
}


