// C program to find the largest item
// in binary tree

#include <stdio.h>

#include <stdlib.h>

typedef struct node {
        int item;
        struct node * left;
        struct node * right;

}
Node;

void AddNode(Node ** root, int item) {
        Node * temp = * root;
        Node * prev = * root;

        if ( * root == NULL) {
                * root = (Node * ) malloc(sizeof(Node));

                ( * root) -> item = item;
                ( * root) -> left = ( * root) -> right = NULL;
        } else {
                while (temp != NULL) {
                        if (item > temp -> item) {
                                prev = temp;
                                temp = temp -> right;
                        } else {
                                prev = temp;
                                temp = temp -> left;
                        }
                }
                temp = (Node * ) malloc(sizeof(Node));
                temp -> item = item;

                if (item >= prev -> item)
                        prev -> right = temp;
                else
                        prev -> left = temp;
        }
}

void FindLarge(Node * root, int * large) {
        if (root != NULL) {
                FindLarge(root -> left, large);

                if ( * large < root -> item)
                        *
                        large = root -> item;

                printf("%d ", root -> item);
                FindLarge(root -> right, large);
        }
}

int main() {
        Node * root = NULL;

        int large = 0;

        AddNode( & root, 10);
        AddNode( & root, 20);
        AddNode( & root, 60);
        AddNode( & root, 50);
        AddNode( & root, 40);

        printf("Inorder traversing:\n");
        FindLarge(root, & large);

        printf("\nLargest item is: %d\n", large);

        return 0;
}
