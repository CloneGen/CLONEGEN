int main () {
    int n, k, i = 0, b, t, s;
    cin >> n >> k;
    t = n + k;
    s = t;
    for (i = 1; i <= n + 1; i++) {
        b = s % n;
        if ((b == k) * ((s - k) % n == 0) * ((s - k) / n >= 1) == 1) {
            s = (s - k) * (n - 1) / n;
            continue;
        }
        else {
            if ((i - 1) == n) {
                cout << t;
                break;
            }
            else {
                t = t + 1;
                s = t;
                i = 0;
                continue;
            }
        }
    }
    return 0;
}

