int main () {
    int n = 0, i = 0, j = 0, p = 0, h = 0;
    char a [81] = " ";
    cin >> n;
    cin.get ();
    for (i = 0; i < n; i++) {
        p = 0;
        cin.getline (a, 81, '\n');
        for (j = 0; j < 81; j++) {
            if (a[j] == '\0') {
                h = j;
                break;
            }
        }
        for (j = 0; j < h; j++) {
            if ((a[0] == '_') || ((a[0] >= 'A') && (a[0] <= 'Z')) || ((a[0] <= 'z') && (a[0] >= 'a'))) {
                if (((a[j] >= 'A') && (a[j] <= 'Z')) || ((a[j] <= 'z') && (a[j] >= 'a')) || ((a[j] >= '0') && (a[j] <= '9')) || a[j] == '_')
                    p = 1;
                else {
                    p = 0;
                    break;
                }
            }
        }
        if (p == 1)
            cout << 1 << endl;
        if (p == 0)
            cout << 0 << endl;
    }
    return 0;
}

