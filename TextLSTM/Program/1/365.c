int f (int x, int y) {
    int i, num = 0;
    int a [100];
    int sum = 0;
    for (i = x; i <= sqrt (y); i++) {
        if (y % i == 0) {
            num++;
            a[num] = 1 + f (i, y / i);
        }
    }
    for (i = 1; i <= num; i++) {
        sum = sum + a[i];
    }
    return sum;
}

int main () {
    int n, x, i, b [100];
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> x;
        b[i] = x;
    }
    for (i = 1; i <= n; i++) {
        cout << f (2, b[i]) + 1 << endl;
    }
    return 0;
}

