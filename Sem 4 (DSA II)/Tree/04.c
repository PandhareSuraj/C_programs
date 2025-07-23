#include <stdio.h>
#include <stdlib.h>

struct tree {
    int key;
    struct tree *right, *left;
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

void preorder(struct tree *root) {
    if (root != NULL) {
        printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct tree *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->key);
    }
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
    int choice, key;

    do {
        printf("\nBinary Search Tree Menu:\n");
        printf("1. Insert\n");
        printf("2. Inorder Traversal\n");
        printf("3. Preorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Count Total Nodes\n");
        printf("6. Count Leaf Nodes\n");
        printf("7. Search Key\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the key to insert: ");
                scanf("%d", &key);
                root = insert(root, key);
                printf("Key %d inserted.\n", key);
                break;

            case 2:
                printf("Inorder Traversal: ");
                inorder(root);
                printf("\n");
                break;

            case 3:
                printf("Preorder Traversal: ");
                preorder(root);
                printf("\n");
                break;

            case 4:
                printf("Postorder Traversal: ");
                postorder(root);
                printf("\n");
                break;

            case 5:
                printf("Total Nodes: %d\n", countNodes(root));
                break;

            case 6:
                printf("Leaf Nodes: %d\n", countLeafNodes(root));
                break;

            case 7:
                printf("Enter the key to search: ");
                scanf("%d", &key);
                if (searchKey(root, key)) {
                    printf("Key %d found in the tree.\n", key);
                } else {
                    printf("Key %d not found in the tree.\n", key);
                }
                break;

            case 8:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 8);
}
