int main () {
    int n, num, i, j = 0, k;
    int a [91] = {0};
    cin >> n;
    int b [20000] = {0};
    for (i = 0; i < n; i++) {
        cin >> num;
        if (a[num - 10] == 0) {
            b[j] = num;
            a[num - 10]++;
            j++;
        }
    }
    cout << b[0];
    for (k = 1; k <= n; k++) {
        if (b[k] == 0)
            break;
        else
            cout << " " << b[k];
    }
    return 0;
}

