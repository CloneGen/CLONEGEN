int main () {
    char str1 [105];
    int len, word [105] = {0}, w = 1, dcgs, a;
    cin.getline (str1, 101, '\n');
    len = strlen (str1) - 1;
    for (int i = 0;
    i <= len; i++) {
        if (str1[i] != ' ')
            word[w] = word[w] + 1;
        else
            w = w + 1;
        dcgs = w;
    }
    int p = len;
    for (int i = dcgs;
    i >= 2; i--) {
        for (int j = p - word[i] + 1;
        j <= p; j++)
            cout << str1[j];
        p = p - word[i] - 1;
        cout << " ";
    }
    for (int j = 0;
    j <= word[1] - 1; j++)
        cout << str1[j];
    return 0;
}

