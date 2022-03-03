int main () {
    int n, i, sum;
    cin >> n;
    sum = 0;
    if (n < 70) {
        for (i = 1; i <= n; i++) {
            if ((i % 7 != 0) && (i % 10 != 7))
                sum = sum + i * i;
        }
    }
    else if (70 <= n && n < 80) {
        for (i = 1; i <= 69; i++) {
            if ((i % 7 != 0) && (i % 10 != 7))
                sum = sum + i * i;
        }
    }
    else if (n >= 80) {
        for (i = 1; i <= 69; i++) {
            if ((i % 7 != 0) && (i % 10 != 7))
                sum = sum + i * i;
        }
        for (i = 80; i <= n; i++) {
            if ((i % 7 != 0) && (i % 10 != 7))
                sum = sum + i * i;
        }
    }
    cout << sum;
}

