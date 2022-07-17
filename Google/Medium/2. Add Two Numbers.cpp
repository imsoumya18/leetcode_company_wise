/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* addTwoNumbers(ListNode *l1, ListNode *l2)
        {
            int n1 = 0, n2 = 0, sum, carry = 0;

            n1 = l1->val;
            n2 = l2->val;

            sum = n1 + n2 + carry;
            if (sum > 9)
            {
                carry = sum / 10;
                sum %= 10;
            }
            ListNode *list = new ListNode(sum);
            ListNode *curr = list;
            l1 = l1->next;
            l2 = l2->next;

            while (l1 != NULL || l2 != NULL)
            {
                if (l1 == NULL)
                    n1 = 0;
                else
                    n1 = l1->val;

                if (l2 == NULL)
                    n2 = 0;
                else
                    n2 = l2->val;

                sum = n1 + n2 + carry;
                if (sum > 9)
                {
                    carry = sum / 10;
                    sum %= 10;
                }
                else
                    carry = 0;

                ListNode *temp = new ListNode(sum);
                curr->next = temp;
                curr = curr->next;
                if (l1 != NULL)
                    l1 = l1->next;
                if (l2 != NULL)
                    l2 = l2->next;
            }
            if (carry > 0)
            {
                ListNode *temp = new ListNode(carry);
                curr->next = temp;
            }

            return list;
        }
};
