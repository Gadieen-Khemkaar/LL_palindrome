## 🔁 Palindrome Check in Singly Linked List (C++)

This repository contains a simple and efficient solution to check whether a singly linked list is a palindrome using a stack-based approach in C++.

---

### 🧠 Problem Statement

Given the head of a singly linked list, determine whether the list is a **palindrome**.
A list is a palindrome if the sequence of node values is the same forward and backward.

---

### ✅ Sample Input

```
Linked List: 1 → 2 → 3 → 2 → 1
```

### 🔄 Output

```
true
```

---

### 🚀 Approach: Stack-Based Comparison

We use a `stack` to reverse the traversal of the linked list.

1. Traverse the list and push all node values onto a stack.
2. Traverse the list again and for each node:

   * Compare its value to the **top of the stack**.
   * If all values match, it’s a palindrome.

---

### 💡 Code Summary

```cpp
bool isPalindrome(Node *head) {
    Node* temp = head;
    stack<int> st;

    while (temp) {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while (temp) {
        if (temp->data != st.top()) return false;
        st.pop();
        temp = temp->next;
    }

    return true;
}
```

---

### ⏱️ Time and Space Complexity

| Metric         | Value |
| -------------- | ----- |
| Time           | O(n)  |
| Space          | O(n)  |
| n = # of nodes |       |

---

### 🧩 Alternative Optimal Solution (Not Included Yet)

You can solve this in **O(1) space** by:

* Finding the middle of the list using slow/fast pointers.
* Reversing the second half in-place.
* Comparing both halves.
* (Optional: restoring the list)

> Let me know if you'd like this version added!

---

### 🧪 Edge Cases

* Empty list → ✅ returns `true`
* Single node → ✅ returns `true`
* Even/odd number of nodes → ✅ handled correctly

---

### 📁 File Structure

```
├── is_palindrome.cpp     # Main C++ code
└── README.md             # You are here
```
