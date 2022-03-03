int main () {
    int d [100000], n, k, i, count = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++)
        cin >> d[i];
    cin >> k;
    for (int i = n - 1;
    i >= 0; i--)
        if (d[i] == k) {
            for (int j = i + 1;
            j < n; j++)
                d[j - 1] = d[j];
            count++;
        }
    if (count == n)
        cout << " " << endl;
    else {
        cout << d[0];
        for (int i = 1;
        i < n - count; i++)
            cout << " " << d[i];
        cout << endl;
    }
    return 0;
}

