int main () {
    int e = 0, s, i, k;
    cin >> s;
    int a [s];
    for (i = 0; i < s; i++)
        cin >> a[i];
    cin >> k;
    for (i = 0; i < s; i++) {
        if (a[i] == k) {
            int m = i;
            for (; m > 0; m--)
                a[m] = a[m - 1];
            e++;
            a[m] = 0;
        }
    }
    for (i = e; i < s - 1; i++) {
        cout << a[i] << " ";
    }
    cout << a[s - 1];
}

