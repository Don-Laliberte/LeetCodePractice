/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* start = head;
        while(head != nullptr) {
            ListNode* last_node = head;
            while (head->next != nullptr) {
                if (head->next->val != head->val) {
                    break;
                }
                else {
                    head = head->next;
                }
            }
            last_node->next = head->next;
            head = last_node->next;
        }
        return start;
    }
};