int main () {
    char a [103], word [103], rep [103], b [203], i, j;
    cin.get (a, 101, '\n');
    cin >> word >> rep;
    int wordlen = strlen (word), alen = strlen (a), replen = strlen (rep);
    for (i = alen; i > 0; i--)
        a[i] = a[i - 1];
    a[0] = ' ';
    a[alen + 1] = ' ';
    a[alen + 2] = '\0';
    for (i = 1, j = 0; i < alen + 2; i++, j++) {
        if (a[i - 1] == ' ' && a[i + wordlen] == ' ' && strncmp (a + i, word, wordlen) == 0) {
            strcpy (b + j, rep);
            i = i + wordlen - 1;
            j = j + replen - 1;
        }
        else
            b[j] = a[i];
    }
    b[j - 1] = '\0';
    for (i = 0;; i++)
        if (b[i] != '\0')
            cout << b[i];
        else
            break;
    return 0;
}

