int main () {
    int max, n, t, i;
    char word [50];
    cin >> n;
    cin >> word;
    cout << word;
    max = strlen (word);
    for (i = 2; i <= n; i++) {
        scanf ("%s", word);
        t = strlen (word);
        max += t + 1;
        if (max > 80) {
            max = t;
            cout << endl << word;
            continue;
        }
        cout << ' ' << word;
    }
    return 0;
}

