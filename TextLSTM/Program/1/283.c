int fenjieyinshi (int n, int m) {
    int i = 0;
    int sum = 1;
    if (n < m)
        return 0;
    else {
        for (i = m; i < n; i++)
            if (n % i == 0)
                sum += fenjieyinshi (n / i, i);
        return sum;
    }
}

int main () {
    int n = 0;
    int i = 0;
    int a = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a;
        if (a == 1)
            cout << 1 << endl;
        else
            cout << fenjieyinshi (a, 2) << endl;
    }
    return 0;
}

