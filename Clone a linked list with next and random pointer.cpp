/* You are given a special linked list with N nodes where each node has a next pointer pointing to its next node. 
   You are also given M random pointers, where you will be given M number of pairs denoting two nodes a and b  i.e. a->arb = b.
   Construct a copy of the given list. The copy should consist of exactly N new nodes, where each new node has its value set to the value of its 
   corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers 
   in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.
   
   For example, if there are two nodes X and Y in the original list, where X.random --> Y, then for the corresponding two nodes x and y in the copied list,
   x.random --> y.
   Return the head of the copied linked list.
  
   Input-:
   N = 4, M = 2
   value = {1,2,3,4}
   pairs = {{1,2},{2,4}}
   Output: 1
   
   
   This Problem is done in-:
   Time Complexity : O(n)
   Auxilliary Space : O(1) */


   Node *copyList(Node *head)
    {
         unordered_map<Node *, Node *>m;
         for(Node *curr = head;curr!=NULL;curr=curr->next)
         {
             m[curr] = new Node(curr->data);

         }
         for(Node *curr=head;curr!=NULL;curr=curr->next)
         {
           m[curr]->next = m[curr->next];
           m[curr]->arb = m[curr->arb];

         }
         return m[head];


    }
