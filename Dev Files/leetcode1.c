/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head)
{
    if(!head)
        return head;
    struct ListNode* cur=head;
    while(cur->next)
    {
        if(cur->val == cur->next->val)
        {
            struct ListNode* to_free=cur->next;
            cur->next=cur->next->next;
            free(to_free);
            continue;
        }
        cur=cur->next;
    }
    return head;
}
