int main () {
    char s [100];
    int i = 0, count = 0, j = 0;
    char str [100] [100];
    char word1 [100], word2 [100];
    cin.getline (s, 100, '\n');
    for (i = 0; i < 100; i++) {
        if (s[i] != ' ') {
            str[count][j] = s[i];
            j++;
        }
        else if (s[i] == ' ') {
            str[count][j + 1] = '\0';
            count++;
            j = 0;
            continue;
        }
        else if (s[i] == '\0')
            break;
    }
    cin.getline (word1, 100, '\n');
    cin.getline (word2, 100, '\n');
    for (i = 0; i <= count; i++) {
        if (strcmp (str[i], word1) == 0)
            strcpy (str[i], word2);
    }
    cout << str[0];
    for (i = 1; i <= count; i++)
        cout << ' ' << str[i];
    return 0;
}

