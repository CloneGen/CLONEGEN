int main () {
    int n, i, j, k, number, ju = 0;
    int a [100000], b [100000], num [100000];
    cin >> n;
    i = 0;
    do {
        cin >> a[i] >> b[i];
        i++;
    }
    while (a[i - 1] != 0 || b[i - 1] != 0);
    number = i - 1;
    for (k = 0; k < n; k++) {
        num[k] = 0;
        for (j = 0; j < number; j++) {
            if (b[j] == k)
                num[k]++;
        }
    }
    for (i = 0; i < n; i++) {
        if (num[i] == n - 1) {
            cout << i << endl;
            ju++;
        }
    }
    if (ju == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

