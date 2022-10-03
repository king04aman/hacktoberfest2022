// Username : Umbridge


/*
problem statement

Given the head of a singly linked list, return the middle node of the linked list. If there are two middle nodes, return the second middle node.

Example 1:
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.

Example 2:
Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
 

Constraints:
The number of nodes in the list is in the range [1, 100].
1 <= Node.val <= 100

SOLUTION

Maintain a slow and a fast pointer. Slow moves one place at a time while fast moves two places at a time. When fast pointer reaches end of the linked list, at that time slow pointer is the middle element.

*/


  ListNode* middleNode(ListNode* head) {
        if(head==NULL|| head->next==NULL)
            return head;
        ListNode* slow=head;
        ListNode* fast =head;
        while(fast!=NULL&& fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
       
        return slow;
    }







