int main () {
    int n, i;
    unsigned j;
    char k, l;
    cin >> n;
    char a [n] [81];
    cin.getline (a[0], 81);
    for (i = 0; i < n; i++)
        cin.getline (a[i], 81);
    for (i = 0; i < n; i++) {
        k = a[i][0];
        if (!(k == '_' || (k >= 'A' && k <= 'Z') || (k >= 'a' && k <= 'z'))) {
            cout << 0 << endl;
            continue;
        }
        else {
            for (j = 0; j < strlen (a[i]); j++) {
                l = a[i][j];
                if (!(l == '_' || (l >= 'A' && l <= 'Z') || (l >= 'a' && l <= 'z') || (l >= '0' && l <= '9'))) {
                    cout << 0 << endl;
                    break;
                }
            }
            if (j == strlen (a[i]))
                cout << 1 << endl;
        }
    }
    return 0;
}

