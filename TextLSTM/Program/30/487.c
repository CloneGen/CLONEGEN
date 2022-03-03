int main () {
    int n, i, sum = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        if (i % 7 != 0 && ((i / 10) % 7 != 0 && (i / 10) != 0 || (i / 10) == 0) && ((i - (i / 10) * 10) % 7 != 0 && i % 10 != 0 || i % 10 == 0)) {
            sum = sum + i * i;
        }
    }
    cout << sum << endl;
    return 0;
}

