/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
struct ListNode* temp=head;
int size=0;
while (temp) {
            size++;
            temp = temp -> next;
        }
        
		// storing the length in another variable
        int original_size = size;
        
		// taking the half of the original length
        int half = size / 2;
        
        while (head) {
            if ((original_size % 2 == 0 && size == half) || (original_size % 2 != 0 && size - 1 == half)) {
                break;
            }
            head = head -> next;
            size--;
        }
        
        return head;
}
