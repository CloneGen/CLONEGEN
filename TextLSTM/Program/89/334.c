int main () {
    int n, a [100000] [2], i = 0, j = 0, k, b [100000] = {0}, count [100000] = {0}, t = 0;
    cin >> n;
    do {
        cin >> a[i][0] >> a[i][1];
        i++;
    }
    while (a[i - 1][0] != 0 || a[i - 1][1] != 0);
    k = i - 1;
    for (i = 0; i < k; i++)
        b[a[i][0]]++;
    while (j < n) {
        if (b[j] == 0) {
            for (i = 0; i < k; i++)
                if (a[i][1] == j)
                    count[j]++;
            if (count[j] == n - 1) {
                t++;
                cout << j << endl;
            }
            j++;
        }
        else
            j++;
    }
    if (t == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

