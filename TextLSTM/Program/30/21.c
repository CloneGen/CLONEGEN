int main () {
    int n, i, b, a, sum = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        if (i % 7 != 0) {
            b = i;
            while (b > 0) {
                a = b % 10;
                if (a == 7)
                    break;
                b = (b - a) / 10;
            }
            if (a != 7)
                sum = sum + i * i;
        }
    }
    cout << sum << endl;
    return 0;
}

