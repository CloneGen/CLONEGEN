int main () {
    int n, k;
    int *a;
    scanf ("%d", &n);
    a = (int *) malloc (n * sizeof (int));
    for (k = 0; k < n; k++)
        cin >> a[k];
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    }
    int t = 0;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            continue;
        if (t != 0)
            cout << ",";
        cout << a[i];
        t = 1;
    }
    return 0;
}

