int main () {
    int n;
    cin >> n;
    int sum = 0;
    int i = 0;
    for (i = 1; i <= n; i++) {
        int a, b;
        if (n >= 7) {
            if (i > 10) {
                b = i % 10;
                a = (i - b) / 10;
            }
            else {
                a = 0;
                b = i;
            }
            if (i < 7)
                sum = sum + i * i;
            else {
                if (i % 7 != 0 && a != 7 && b != 7)
                    sum = sum + i * i;
            }
        }
        else
            sum = sum + i * i;
    }
    cout << sum;
    return 0;
}

