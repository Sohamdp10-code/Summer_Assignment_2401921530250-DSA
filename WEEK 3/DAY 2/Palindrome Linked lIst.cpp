class Solution {
public:
    bool isPalindrome(ListNode* head) {

        ListNode *slow = head, *fast = head;

         while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
      
          ListNode *prev = NULL;

        while (slow) {
            ListNode *next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }

          while (prev) {
            if (head->val != prev->val)
                return false;

            head = head->next;
            prev = prev->next;
        }

        return true;
    }
};
// A palindrome is something that reads the same forward and backward.
