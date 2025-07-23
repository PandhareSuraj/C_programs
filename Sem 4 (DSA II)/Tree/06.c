#include <stdio.h>
#include <stdlib.h>

struct tree *create(int data);
struct tree *insert(struct tree *root, int data);
void inorder(struct tree *root);
struct tree *mirror(struct tree *root);

struct tree {
    struct tree *right;
    struct tree *left;
    int key;
};

struct tree *create(int data) {
    struct tree *tmp = (struct tree *)malloc(sizeof(struct tree));
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

void inorder(struct tree *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

struct tree *mirror(struct tree *root) {
    if (root == NULL) {
        return NULL;
    }
    
    struct tree *temp;
    temp = (struct tree *)malloc(sizeof(struct tree));
    temp->key = root->key;

    // Swap left and right subtrees recursively
    temp->left = mirror(root->right);
    temp->right = mirror(root->left);

    return temp;
}

int main() {
    struct tree *root = NULL;

    // Insert elements into the original tree
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 10);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 4);
    root = insert(root, 7);
    root = insert(root, 14);
    root = insert(root, 13);

    // Print the original tree
    printf("Inorder traversal of the original tree:\n");
    inorder(root);
    printf("\n");

    // Create a mirrored copy of the tree
    struct tree *rootMirror = mirror(root);

    // Print the mirrored tree
    printf("Inorder traversal of the mirrored tree:\n");
    inorder(rootMirror);
    printf("\n");

    return 0;
}
