/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode newListStart = new ListNode();
        ListNode newListPointer= newListStart;
        int carryover = 0;
        while (l1 != null && l2 != null) {
            int sum = l1.val + l2.val + carryover;
            if (sum > 9) {
                carryover = 1;
                sum=sum%10;
            }
            else {
                carryover = 0;
            }
            newListPointer.next = new ListNode(sum);
            l1 = l1.next;
            l2 = l2.next;
            newListPointer = newListPointer.next;
        }

        while (l1 != null) {
            int sum = l1.val + carryover;
            if (sum > 9) {
                carryover = 1;
                sum=sum%10;
            }
            else {
                carryover = 0;
            }
            newListPointer.next = new ListNode(sum);
            l1 = l1.next;
            newListPointer = newListPointer.next;
        }

        while (l2 != null) {
            int sum = l2.val + carryover;
            if (sum > 9) {
                carryover = 1;
                sum=sum%10;
            }
            else {
                carryover = 0;
            }
            newListPointer.next = new ListNode(sum);

            l2 = l2.next;
            newListPointer = newListPointer.next;
        }

        if (carryover == 1) {
                newListPointer.next = new ListNode(1);   
        }

        return newListStart.next;
    }

    
}