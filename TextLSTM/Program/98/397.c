int main () {
    int n, i, l, L = -1, k = 0, j;
    char before [40];
    char word [40];
    cin >> n;
    scanf ("%s", word);
    l = strlen (word);
    for (i = 0; i < l; i++)
        before[i] = word[i];
    before[l] = '\0';
    L = l;
    for (i = 1; i < n; i++) {
        scanf ("%s", word);
        l = strlen (word);
        k = L +l + 1;
        if (k > 80 && L <= 80) {
            cout << before;
            cout << endl;
            L = l;
            for (j = 0; j < l; j++)
                before[j] = word[j];
            before[l] = '\0';
        }
        else {
            cout << before << " ";
            for (j = 0; j < l; j++)
                before[j] = word[j];
            before[l] = '\0';
            L = k;
        }
    }
    cout << word;
    return 0;
}

