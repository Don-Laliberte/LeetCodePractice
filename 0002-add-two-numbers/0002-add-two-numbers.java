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
        ListNode newListPointer = new ListNode(0);
        ListNode newListStart = new ListNode(0, newListPointer);

        while (l1 != null && l2 != null) {
            if ((l1.val + l2.val + newListPointer.val) >= 10) {
                newListPointer.val = l1.val + l2.val + newListPointer.val - 10;
                newListPointer.next = new ListNode(1);
            }
            else {
                newListPointer.val = l1.val + l2.val + newListPointer.val;
                if (l1.next != null || l2.next != null) {
                    newListPointer.next = new ListNode(0);
                }
            }
        l1 = l1.next;
        l2 = l2.next;
        newListPointer = newListPointer.next;
        }

        while (l1 != null) {
            System.out.println(l1.val + " " + newListPointer.val);
            if ((l1.val + newListPointer.val) >= 10) {
                newListPointer.val = l1.val + newListPointer.val - 10;
                newListPointer.next = new ListNode(1);
            }
            else {
                newListPointer.val = l1.val + newListPointer.val;
                    if (l1.next != null) {
                        newListPointer.next = new ListNode(0);
                    }
            }
            l1 = l1.next;
            newListPointer = newListPointer.next;
        }

        while (l2 != null) {
            System.out.println(l2.val + " " + newListPointer.val);
            if ((l2.val + newListPointer.val) >= 10) {
                newListPointer.val = l2.val + newListPointer.val - 10;
                newListPointer.next = new ListNode(1);
            }
            else {
                newListPointer.val = l2.val + newListPointer.val;
                    if (l2.next != null) {
                        newListPointer.next = new ListNode(0);
                    }
            }
            l2 = l2.next;
            newListPointer = newListPointer.next;
        }

        return newListStart.next;
    }

    
}