int main () {
    int n;
    cin >> n;
    int a, b, c, sum = 0, k;
    for (int i = 1;
    i <= n; i++) {
        a = i / 10;
        b = i % 10;
        if (i % 7 != 0 && a != 7 && b != 7) {
            sum += i * i;
        }
    }
    cout << sum << endl;
    return 0;
}

