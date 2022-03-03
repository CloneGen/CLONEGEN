int main () {
    int n, i, sum = 0;
    cin >> n;
    if (n > 0 && n < 100)
        for (i = 1; i <= n; i++) {
            if (i % 7 != 0) {
                if (i <= 9) {
                    sum = sum + i * i;
                }
                else if ((i / 10) != 7 && (i % 10) != 7)
                    sum = sum + i * i;
            }
        }
    cout << sum << endl;
    return 0;
}

