int main () {
    int n, a, b, t, x, max;
    cin >> n;
    x = 0;
    max = 0;
    for (int i = 1;
    i <= n; i++) {
        cin >> a >> b;
        t = (a >= 90) && (a <= 140) && (b >= 60) && (b <= 90);
        if (t == 1) {
            x = x + 1;
            if (x >= max)
                max = x;
        }
        else {
            if (x >= max)
                max = x;
            x = 0;
        }
    }
    cout << max;
    return 0;
}

