int sum = 0;

int main () {
    void yinshu (int, int);
    int i, n, a;
    cin >> n;
    for (i = 1; i <= n; i++) {
        sum = 0;
        cin >> a;
        yinshu (a, 2);
        cout << sum << endl;
    }
    return 0;
}

void yinshu (int a, int x) {
    if (a != 1) {
        for (int i = x;
        i <= a; i++)
            if (a % i == 0)
                yinshu (a / i, i);
    }
    if (a == 1)
        sum++;
}

