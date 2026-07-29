
bool isPalindrome(struct ListNode* head) {
    int arr[100000];
    int i = 0;
    while (head != NULL) {
        arr[i++] = head->val;
        head = head->next;
    }
    int left = 0, right = i - 1;

    while (left < right) {
        if (arr[left] != arr[right])
            return false;

        left++;
        right--;
    }

    return true;
}