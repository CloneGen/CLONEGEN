int main () {
    char words [101];
    int i;
    cin.get (words, 101);
    for (i = 99; i > 0; i--) {
        if (words[i] == 32 && words[i - 1] == 32)
            words[i] = 1;
    }
    for (i = 0; i < strlen (words); i++) {
        if (words[i] != 1)
            cout << words[i];
    }
    return 0;
}

