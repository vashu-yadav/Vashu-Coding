
void reverseString(char str[]) {
    int start = 0;
    int end = 0;
    char temp;
    // Find the end of the string
    while (str[end] != '\0') end++;
    end--; // Last character index

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
