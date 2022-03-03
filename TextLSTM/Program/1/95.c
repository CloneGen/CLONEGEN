int fenjie (int a, int max) {
    int i = 0;
    int sum = 0;
    if (a == 1)
        return 1;
    for (i = max; i >= 2; i--) {
        if ((a % i) == 0)
            sum += fenjie (a / i, i);
    }
    return sum;
}

int main () {
    int k = 0;
    int n = 0;
    int num = 0;
    cin >> n;
    for (k = 1; k <= n; k++) {
        cin >> num;
        cout << fenjie (num, num);
        if (k < n)
            cout << endl;
    }
    return 0;
}

