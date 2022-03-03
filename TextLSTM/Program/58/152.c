int main (void) {
    int n, i, j;
    char a [81];
    cin >> n;
    cin.getline (a, 81);
    for (i = 0; i < n; i++) {
        cin.getline (a, 81);
        int len = strlen (a);
        if (a[0] != '_' && (a[0] < 65 || (a[0] > 90 && a[0] < 97) || a[0] > 122))
            cout << 0 << endl;
        else {
            for (j = 1; j < len; j++)
                if (a[j] != '_' && (a[j] < 48 || (a[j] > 57 && a[j] < 65) || (a[j] > 90 && a[j] < 97) || a[j] > 122)) {
                    cout << 0 << endl;
                    break;
                }
            if (j == len)
                cout << 1 << endl;
        }
    }
    return 0;
}

