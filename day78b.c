
int isPalindrome(char str[]) {
    int start = 0;
    int end = 0;
    while (str[end] != '\0') end++;
    end--;

    while (start < end) {
        if (str[start] != str[end])
            return 0; // Not palindrome
        start++;
        end--;
    }
    return 1; // Palindrome
}
