int main () {
    int a, n, i;
    int f [20001] = {0};
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a;
        if (f[a] == 0) {
            if (i == 1)
                cout << a;
            else
                cout << " " << a;
            f[a] = 1;
        }
    }
    return 0;
}

