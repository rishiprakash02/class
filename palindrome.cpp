# include<iostream>
using namespace std;

/*bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin>> input;

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}*/

/*int main(){
    int a, b, sum;
    a=0;
    b=1;
    sum=0;
    int n;
    cout<<"Enter the number of iterations: "<<endl;
    cin>>n;
    for(int j=0; j<=n; j++ ){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<"The fibonacci series output is: "<<sum<<endl;

}*/

/*int main(){
    int n;
    cout<<"Enter number of elements in array: "<<endl;
    int number[]={12, 45, 67, 89, 34, 23, 90};
    n= sizeof(number)/sizeof(number[0]);
    int maxelement = number[0];
    for (int i=0; i<n; i++){
        if(number[i]>maxelement){
            maxelement=number[i];
        }
    }
    cout << "The largest element in the array is: "<<maxelement<<endl;

    return 0;
}*/


#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        // Step 1: Find middle using slow and fast pointers
        ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the list
        ListNode* prev = nullptr;
        while (slow) {
            ListNode* next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }

        // Step 3: Compare first half and reversed second half
        ListNode* left = head;
        ListNode* right = prev; // Start of reversed second half
        while (right) {
            if (left->val != right->val)
                return false;
            left = left->next;
            right = right->next;
        }

        return true;
    }
};

// Helper to create a linked list from array
ListNode* createList(int arr[], int n) {
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < n; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

// Example usage
int main() {
    Solution sol;
    
    int arr1[] = {1, 2, 2, 1};
    ListNode* head1 = createList(arr1, 4);
    cout << sol.isPalindrome(head1) << endl; // Output: 1

    int arr2[] = {1, 2};
    ListNode* head2 = createList(arr2, 2);
    cout << sol.isPalindrome(head2) << endl; // Output: 0

    return 0;
}
