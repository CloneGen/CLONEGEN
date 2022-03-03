int main () {
    int n, i = 1, a, b, c = 0, d = 0;
    cin >> n;
    while (i <= n) {
        for (; i <= n; i++) {
            cin >> a >> b;
            if (a <= 140 && a >= 90 && b <= 90 && b >= 60) {
                c++;
                continue;
            }
            else {
                if (c >= d)
                    d = c;
                c = 0;
                i++;
                break;
            }
        }
        if (c > d)
            d = c;
    }
    cout << d << endl;
    return 0;
}

