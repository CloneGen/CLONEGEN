int main () {
    char word [100];
    int n = 0;
    int i = 0;
    cin.getline (word, 100, '\n');
    n = strlen (word);
    for (i = 0; i < n; i++) {
        if (word[i] == word[i - 1] && word[i - 1] == ' ') {
            continue;
        }
        if (word[i] == '\0')
            break;
        cout << word[i];
    }
    return 0;
}

