
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode *ret = new ListNode(0);
        ListNode *cur = ret;
        int carry=0;
        int sum = 0;
        while(l1 != NULL || l2 != NULL){
            if(l1 != NULL && l2 != NULL){
                cur->next = new ListNode((l1->val + l2->val + carry) % 10);
                carry = (l1->val + l2->val + carry) / 10;
                l1 = l1->next;
                l2 = l2->next;
                cur = cur->next;
                continue;
            }
            if(l1 != NULL ){
                cur->next = new ListNode((l1->val + carry) % 10);
                carry = (l1->val + carry) / 10;
                l1 = l1->next;
            }
            if(l2 != NULL ){
                cur->next = new ListNode((l2->val + carry) % 10);
                carry = (l2->val + carry) / 10;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        if(carry) cur->next = new ListNode(carry);
        return ret->next;
    }
};

