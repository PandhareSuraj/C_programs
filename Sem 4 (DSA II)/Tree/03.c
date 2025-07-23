#include<stdio.h>
#include<stdlib.h>

struct tree {
    int key;
    struct tree *right, *left;
};

struct tree *create(int data) {
    struct tree *tmp = (struct tree*) malloc(sizeof(struct tree));
    tmp->key = data;
    tmp->left = tmp->right = NULL;
    return tmp;
}

struct tree *insert(struct tree *root, int data) {
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

int countNodes(struct tree *root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int countLeafNodes(struct tree *root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return 1;  
    }
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int searchKey(struct tree *root, int key) {
    if (root == NULL) {
        return 0;  
    }
    if (root->key == key) {
        return 1;  
    }
    if (key < root->key) {
        return searchKey(root->left, key);  
    }
    return searchKey(root->right, key);  
}

void main() {
    struct tree *root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 40);
    insert(root, 60);
    insert(root, 70);
    insert(root, 90);

    printf("Total nodes: %d\n", countNodes(root));

    printf("Leaf nodes: %d\n", countLeafNodes(root));

    int key = 90;
    if (searchKey(root, key)) {
        printf("Key %d found in the tree.\n", key);
    } else {
        printf("Key %d not found in the tree.\n", key);
    }
}
