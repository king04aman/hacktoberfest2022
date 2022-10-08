/*
 * 1.  This file contains Insertion, deletion, Inorder Traversal, PreOrder Traversal, PostOrder Traversal Of Binary Search Tree.
 * 2.  Binary Search Tree is a non linear data structure where : 
 *       2.1  left subtree will have values less than root 
 *       2.2  right subtree will have vvalues greater than root
 */

class Node{
    int data;
    Node left, right;

    public Node(int data){
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

class BstTree{
    Node root;
    BstTree(){
        root = null;
    }
    public void insert(int data){
        Node newNode = new Node(data);
        if(root == null){
            root = newNode;
            return;
        }
        Node previous = null;
        Node temp = root;
        while(temp != null){
            if(temp.data > data){
                previous = temp;
                temp = temp.left;
            }
            else if(temp.data < data){
                previous = temp;
                temp = temp.right;
            }
        }
        if(previous.data > data){
            previous.left = newNode;
        }
        else{
            previous.right = newNode;
        }
    }
    
    public Node deleteNode(Node root, int data){
        if(root == null){
            return root;
        }
        if(root.data > data){
            root.left = deleteNode(root.left, data);
            return root;
        }
        else if(root.data < data){
            root.right = deleteNode(root.right, data);
            return root;
        }
        if(root.left == null){
            Node temp = root.right;
            return temp;
        }
        else if(root.right == null){
            Node temp = root.left;
            return temp;
        }
        else{
            Node succParent = root;
            Node succ = root.right;

            while(succ.left != null){
                succParent = succ;
                succ = succ.left;
            }
            if(succParent != root){
                succParent.left = succ.right;
            }
            else{
                succParent.right = succ.right;
            }
            root.data = succ.data;
            return root;
        }
    }

    public void inOrder(Node root){
        if(root != null){
            inOrder(root.left);
            System.out.print(root.data+" ");
            inOrder(root.right);
        }
    }
    public void preOrder(Node root){
        if(root != null){
            System.out.print(root.data+" ");
            preOrder(root.left);
            preOrder(root.right);
        }
    }
    public void postOrder(Node root){
        if(root != null){
            preOrder(root.left);
            preOrder(root.right);
            System.out.print(root.data+" ");
        }
    }
}

public class BinarySearchTree {
    public static void main(String[] args) {
        BstTree tree = new BstTree();
        tree.insert(50);
        tree.insert(30);
        tree.insert(20);
        tree.insert(45);
        tree.insert(70);
        tree.insert(60);
        tree.insert(80);

        System.out.println("Inorder Traversal before deletion");
        tree.inOrder(tree.root);

        tree.root = tree.deleteNode(tree.root, 30);
        
        System.out.println("Inorder Traversal after deletion");
        tree.inOrder(tree.root);

        System.out.println("PreOrder Traversal");
        tree.preOrder(tree.root);

        System.out.println("PostOrder Traversal");
        tree.postOrder(tree.root);

    }
}

// Contributor : Rishabh Srivastava 
// Github Link : https://github.com/RishabhSrivastava1423/