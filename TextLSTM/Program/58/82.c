int main () {
    char a [82];
    memset (a, 0, sizeof (a));
    int b, i, j, k;
    int m;
    cin >> b;
    gets (a);
    for (i = 1; i <= b; i++) {
        gets (a);
        k = strlen (a);
        if ((a[0] == '_') || ((a[0] >= 'A') && (a[0] <= 'Z')) || ((a[0] >= 'a') && (a[0] <= 'z'))) {
            for (j = 1, m = 0; j < k; j++) {
                if ((a[j] == '_') || ((a[j] >= 'A') && (a[j] <= 'Z')) || ((a[j] >= 'a') && (a[j] <= 'z')) || ((a[j] >= '0') && (a[j] <= '9'))) {
                    m++;
                }
            }
            if (m == k - 1)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}

