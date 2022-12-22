#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *result = nullptr;
        ListNode *resultHead = nullptr;
        int remember = 0;

        while (l1 != nullptr && l2 != nullptr)
        {
            int sum = remember + l1->val + l2->val;
            int temp = 0;
            if (sum > 9)
            {
                remember = 1;
                temp = sum / 10;
            }
            else
            {
                remember = 0;
                temp = sum;
            }

            if (result != nullptr)
            {
                ListNode tempNode(temp);
                result->next = &tempNode;
                result = result->next;
            }
            else
            {
                ListNode tempNode(temp);
                result = &tempNode;
                resultHead = result;
            }
        }

        return resultHead;
    }
};