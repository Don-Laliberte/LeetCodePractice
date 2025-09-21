/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        vector<ListNode*> memo;
        while (head && head->next) {
            memo.push_back(head);
            for (int i = 0; i < memo.size(); i++) {
                if (memo[i] == head->next) {
                    return true;
                }
            }
            head = head->next;
        }
        return false;
    }
};