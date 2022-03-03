int main () {
    int sum = 0, i, n = 1;
    cin >> i;
    while (n <= i) {
        if ((n % 7 == 0) || (n % 10 == 7) || ((n > 69) && (n < 80)))
            sum = sum;
        else
            sum = sum + n * n;
        n = n + 1;
    }
    cout << sum << endl;
    return 0;
}

