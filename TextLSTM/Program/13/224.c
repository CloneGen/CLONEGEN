int main () {
    int a [20000], n;
    cin >> n;
    for (int i = 0;
    i < n; i++)
        cin >> a[i];
    cout << a[0];
    for (int t = 1;
    t < n; t++) {
        int k = 0;
        for (; k < t; k++)
            if (a[t] == a[k])
                break;
        if (k == t)
            cout << setw (3) << a[t];
    }
    return 0;
}

