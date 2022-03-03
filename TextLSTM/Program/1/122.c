int sum = 1;

void f (int begin, int m) {
    int i;
    for (i = begin; i <= m; i++) {
        if (m % i == 0 && m / i >= i) {
            sum++;
            f (i, m / i);
        }
        if (i > m / i)
            break;
    }
}

int main () {
    int n, j, m;
    cin >> n;
    for (j = 1; j <= n; j++) {
        cin >> m;
        f (2, m);
        cout << sum << endl;
        sum = 1;
    }
    return 0;
}

