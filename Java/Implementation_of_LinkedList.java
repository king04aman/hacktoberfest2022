
import java.util.*;

class Node {
  int data;
  Node next;
};

class LinkedList {
  Node head;

  LinkedList() {
    head = null;
  }

  void push_back(int newElement) {
    Node newNode = new Node();
    newNode.data = newElement;
    newNode.next = null;
    if (head == null) {
      head = newNode;
    } else {
      Node temp = new Node();
      temp = head;
      while (temp.next != null)
        temp = temp.next;
      temp.next = newNode;
    }
  }

  void PrintList() {
    Node temp = new Node();
    temp = this.head;
    if (temp != null) {
      System.out.print("The LinkedList contains: ");
      while (temp != null) {
        System.out.print(temp.data + " ");
        temp = temp.next;
      }
      System.out.println();
    } else {
      System.out.println("The LinkedList is empty.");
    }
  }
};

public class Implementation {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    LinkedList MyList = new LinkedList();
    int n = sc.nextInt(); // n sized linkedlist
    for (int i = 0; i < n; i++) {
      int x = sc.nextInt();
      MyList.push_back(x);

    }
    sc.close();
    MyList.PrintList();
  }
}
