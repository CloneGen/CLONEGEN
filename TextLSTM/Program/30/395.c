int main () {
    int i, n, sum = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        if (i % 7 == 0)
            sum = sum + 0;
        else if (0 <= i - 70 && i - 70 <= 9)
            sum = sum + 0;
        else if ((i - 7) % 10 == 0)
            sum = sum + 0;
        else
            sum = sum + i * i;
    }
    cout << sum << endl;
    return 0;
}

