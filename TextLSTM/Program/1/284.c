int f (int, int);

int main () {
    int n, a, i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a;
        cout << f (a, 2) << endl;
    }
    return 0;
}

int f (int x, int b) {
    int j, re = 1;
    if (x < b)
        return 0;
    for (j = b; j < x; j++) {
        if (x % j == 0)
            re = re + f (x / j, j);
    }
    return re;
}

