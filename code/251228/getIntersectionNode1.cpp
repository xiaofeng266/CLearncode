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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *cur_headA = headA;
        while(cur_headA !=NULL){
            ListNode *cur_headB = headB;
            while(cur_headB != NULL){
                if(cur_headA == cur_headB){
                   return cur_headA;
                }
                cur_headB = cur_headB->next;
            }
            cur_headA = cur_headA->next;
        }
        return NULL; 
    }
};


/*
我的思路是，直接遍历两个列表，找到两个节点地址相等，就是找到了相交节点。
但是第一次写错了，因为每次链表B都需要从头开始遍历，所以，ListNode *cur_headB = headB;必须写在第一个while内部，而不是在外部
在外部的话，链表B第一次会遍历全部节点，后续都会停留在最后一个节点

*/