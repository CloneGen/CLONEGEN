int main () {
    char str [100];
    gets (str);
    int i, k;
    int j;
    char substr [100];
    k = strlen (str);
    int recorder = 0;
    for (i = 0; i <= k; i++) {
        if (str[i] == ' ') {
            substr[k - i - 1] = ' ';
            for (j = 0; recorder + j < i; j++)
                substr[k - i + j] = str[recorder + j];
            recorder = i + 1;
        }
        else if (str[i] == '\0') {
            for (j = 0; recorder + j < k; j++)
                substr[k - i + j] = str[recorder + j];
        }
    }
    for (i = k; i < 100; i++)
        substr[i] = '\0';
    puts (substr);
    return 0;
}

