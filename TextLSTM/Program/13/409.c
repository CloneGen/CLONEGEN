int main () {
    int n, i, j, k, l = 1;
    cin >> n;
    int a [20000];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++) {
        int flag = 0;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            cout << a[i];
            break;
        }
    }
    i++;
    for (; i < n; i++) {
        int flag = 0;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                flag = 1;
                break;
            }
        }
        if (!flag)
            cout << ' ' << a[i];
    }
    return 0;
}

