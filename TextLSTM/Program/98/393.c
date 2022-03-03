int main () {
    int n, csum = 0, j = 0, i = 0;
    cin >> n;
    char words [1000] [20];
    for (i = 0; i < n; i++)
        scanf ("%s", words[i]);
    for (i = 0; i < n; i++) {
        csum = csum + strlen (words[i]) + 1;
        if (csum == 81) {
            cout << words[j];
            for (j = j + 1; j <= i; j++)
                cout << ' ' << words[j];
            csum = 0;
            cout << endl;
            continue;
        }
        if (csum > 81) {
            cout << words[j];
            for (j = j + 1; j < i; j++)
                cout << ' ' << words[j];
            csum = strlen (words[i]) + 1;
            cout << endl;
            continue;
        }
    }
    cout << words[j];
    for (j = j + 1; j < n; j++)
        cout << ' ' << words[j];
    return 0;
}

