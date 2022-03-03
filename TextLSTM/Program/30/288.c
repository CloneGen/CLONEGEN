int main () {
    int n, m, sum;
    cin >> n;
    sum = 0;
    for (m = 1; m <= n; m = m + 1) {
        if (m % 10 == 7 || m % 7 == 0 || m / 10 == 7)
            sum = sum;
        else
            sum = sum + m * m;
    }
    cout << sum;
    return 0;
}

