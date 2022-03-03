int main () {
    int n;
    int a, b, c;
    int i;
    int sum = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        a = i % 7;
        b = i - 7;
        c = b % 10;
        if (a == 0)
            sum = sum;
        else if (i >= 70 && i <= 79)
            sum = sum;
        else if (c == 0)
            sum = sum;
        else
            sum = sum + i * i;
    }
    cout << sum << endl;
    return 0;
}

