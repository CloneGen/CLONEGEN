int main () {
    char word [100];
    int i, p = 0, k = 0;
    while (cin.getline (word, 100)) {
        for (i = 0; i < 100; i++) {
            if (word[i] != '\0')
                p = i;
            else
                break;
        }
        for (i = 0; i <= p; i++) {
            if (word[i] == ' ') {
                if (word[i + 1] == ' ') {
                    for (k = i; k <= p; k++)
                        word[k] = word[k + 1];
                    i--;
                    p--;
                }
            }
        }
        for (i = 0; i <= p; i++)
            cout << word[i];
    }
    return 0;
}

