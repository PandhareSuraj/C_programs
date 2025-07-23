// C program to traverse to Binary Search Tree using Inorder , Preorder and Postorder Methods   

#include<stdio.h>
#include<stdlib.h>

struct node {
    int key;
    struct node *left, *right;
};

struct node *create(int data) {
    struct node *tmp = (struct node*)malloc(sizeof(struct node));
    tmp->key = data;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}

struct node *insert(struct node *root, int data) {
    if (root == NULL) {
        return create(data);
    }
    if (data < root->key) {
        root->left = insert(root->left, data); 
    } else {
        root->right = insert(root->right, data); 
    }
    return root;
}

void inorder(struct node *root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->key);
    inorder(root->right);
}

void preorder(struct node *root) {
    if (root == NULL) return;
    printf("%d ", root->key);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node *root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->key);
}

void main() {
    struct node *root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 40);
    insert(root, 60);
    insert(root, 70);
    insert(root, 90);

    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Preorder traversal: ");
    preorder(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorder(root);
    printf("\n");
}
