
void replaceSpaces(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ')
            str[i] = '-';
        i++;
    }
}
