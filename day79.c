
void countChars(char str[], int *spaces, int *digits, int *specials) {
    int i = 0;
    *spaces = 0;
    *digits = 0;
    *specials = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ')
            (*spaces)++;
        else if (str[i] >= '0' && str[i] <= '9')
            (*digits)++;
        else if (!( (str[i] >= 'A' && str[i] <= 'Z') ||
                    (str[i] >= 'a' && str[i] <= 'z') ))
            (*specials)++;
        i++;
    }
}
