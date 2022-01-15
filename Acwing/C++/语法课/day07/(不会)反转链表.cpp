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
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = head;
        ListNode* prev = nullptr;
        while(cur)
        {
            ListNode* Next = cur->next; //保存下一个节点
            cur->next = prev; //反转
            prev = cur; // 右移
            cur = Next; // 右移
        }
        return prev; //输出
    }
};