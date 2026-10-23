#include <iostream>

using namespace std;

int main() {
    char str[100];
    
    cin.getline(str, 100);
    
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
    int start = 0;
    int end = length - 1;
    int isPalindrome = 1;
    
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }
    
    if (isPalindrome == 1) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    
    return 0;
}
