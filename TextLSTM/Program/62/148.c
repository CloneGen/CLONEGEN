int main () {
    char words [100];
    cin.getline (words, 100);
    int i, j = 0;
    for (i = 0; words[i] != '\0'; i++) {
        if (words[i] == ' ') {
            if (j == 1)
                continue;
            if (j == 0)
                j++;
        }
        if (words[i] != ' ')
            j = 0;
        cout << words[i];
    }
}

