int fun (int n, int m);

int main () {
    int n, num;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> num;
        cout << fun (num, 2) << endl;
    }
    return 0;
}

int fun (int n, int m) {
    int sum = 1;
    double t = sqrt (n);
    for (int i = m;
    i <= t; i++)
        if (n % i == 0)
            sum += fun (n / i, i);
    return sum;
}

