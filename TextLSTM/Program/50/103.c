int main () {
    int a [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n, i, b, sum = 0;
    cin >> n;
    for (i = 1; i <= 12; i++) {
        sum += a[i - 1];
        b = sum + 12;
        if (((b % 7) + n) % 7 == 5) {
            cout << i << endl;
        }
    }
    return 0;
}

