bool isPalindrome(Node *head) {
    // Step 1: Traverse the list and push all elements onto a stack
    Node* temp = head;
    stack<int> st;

    while (temp != nullptr) {
        st.push(temp->data);
        temp = temp->next;
    }

    // Step 2: Traverse the list again and compare with the stack top
    temp = head;
    while (temp != nullptr) {
        if (temp->data != st.top()) {
            return false;  // Mismatch found, not a palindrome
        }
        st.pop();
        temp = temp->next;
    }

    return true;  // All matched, it's a palindrome
}
