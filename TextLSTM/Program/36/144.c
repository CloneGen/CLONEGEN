void sort (char a [], int n) {
    int i, j;
    char t;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

int main () {
    char a [100], b [100];
    cin >> a >> b;
    int l1 = strlen (a), l2 = strlen (b);
    if (l1 != l2)
        cout << "NO" << endl;
    else {
        sort (a, l1);
        sort (b, l2);
        if (strcmp (a, b) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

