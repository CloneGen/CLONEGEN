int main () {
    int n, i, j, flag, a [20001];
    cin >> n;
    cin >> a[1];
    cout << a[1];
    for (i = 2; i <= n; i++) {
        flag = 0;
        cin >> a[i];
        for (j = 1; j < i; j++) {
            if (a[j] == a[i])
                flag = 1;
        }
        if (flag == 0)
            cout << " " << a[i];
    }
    return 0;
}

