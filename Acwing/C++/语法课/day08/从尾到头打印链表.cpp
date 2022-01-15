/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    vector<int> printListReversingly(ListNode *head)
    {
        vector<int> s;
        for (auto i = head; i; i = i->next)
        {
            s.push_back(i->val);
        }
        reverse(s.begin(),s.end());
        return s;
    }
};