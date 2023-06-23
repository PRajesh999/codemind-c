/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int count(struct ListNode* P)
{
    int count=0;
    while(P!=NULL)
    {
        count++;
        P=P->next;
    }
    return count;
}
bool isPalindrome(struct ListNode* head){
    int n=count(head),i=0,j=n/2;
    int *S;
    S=(int*)malloc(j*sizeof(int));
    struct ListNode*x;
    x=head;
    while(j--)
    {
        S[i]=x->val;
        i++;
        x=x->next;
    }
    if(n%2!=0)
    x=x->next;
    while(x!=NULL)
    {
        i--;
        if(x->val!=S[i])
        return false;
        x=x->next;
    }
    free(S);
    return true;
}
