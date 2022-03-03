int main () {
    int a [100000];
    int i, j, n, out, count = 0, flag = -1;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> out;
    for (i = 0; i < n; i++) {
        if (a[i] != out) {
            count = count + 1;
            flag = i;
        }
    }
    for (j = 0; j < flag; j++)
        if (a[j] != out)
            cout << a[j] << " ";
    if (flag != -1)
        cout << a[flag] << endl;
    return 0;
}

