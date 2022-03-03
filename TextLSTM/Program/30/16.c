int main () {
    int n, sum = 0, a, b;
    cin >> n;
    for (int i = 1;
    i <= n; i++)
        if (i % 7 != 0) {
            a = i / 10;
            b = i - a * 10;
            if (a != 7 && b != 7) {
                sum = sum + i * i;
            }
        }
    cout << sum << endl;
    return 0;
}

