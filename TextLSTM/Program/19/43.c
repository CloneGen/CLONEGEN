int main () {
    char s [105], a [105], b [105], ch [105] [105];
    int i, j = 0, k = 0, word, lens, lenb = 0;
    cin.getline (s, 105, '\n');
    cin.getline (a, 105, '\n');
    cin.getline (b, 105, '\n');
    for (i = 0; i < 105; i++) {
        if (b[i] != '\0')
            lenb += 1;
        else
            break;
    }
    for (i = 0; i < 105; i++) {
        if (s[i] == ' ') {
            ch[j][k] = '\0';
            k = 0;
            j += 1;
        }
        else if (s[i] == '\0') {
            ch[j][k] = s[i];
            lens = i - 1;
            word = j;
            break;
        }
        else {
            ch[j][k] = s[i];
            k += 1;
        }
    }
    for (i = 0; i <= word; i++) {
        k = 1;
        if (strlen (ch[i]) != strlen (a))
            k = 0;
        else {
            for (j = 0; j < strlen (a); j++)
                if (ch[i][j] != a[j])
                    k = 0;
        }
        if (k == 1) {
            for (j = 0; j <= lenb + 1; j++)
                ch[i][j] = b[j];
        }
    }
    for (i = 0; i < word; i++) {
        cout << ch[i] << " ";
    }
    for (j = 0; j < 105; j++) {
        cout << ch[word][j];
        if (ch[word][j + 1] == '\0')
            break;
    }
    return 0;
}

