class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode *> visited;
        ListNode *temp = headA;
        while(temp!=NULL){
            visited.insert(temp);
            temp = temp->next;
        }
        temp = headB;
        while(temp!=NULL){
            if(visited.count(temp)){
                return temp;
            }
            temp = temp->next;
        }
        return NULL;
    }
};