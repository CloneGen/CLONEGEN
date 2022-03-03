int n, k;
int total = 0;
float xishu = 0.0;

int main () {
    int msees (int x, int y);
    cin >> n >> k;
    total = n;
    int i;
    xishu = (float) n / (n - 1);
    while (true) {
        for (i = 1; i <= n; i++) {
            if ((msees (i, k) - k) % n != 0)
                break;
        }
        if (i == n + 1)
            break;
        total += n;
    }
    cout << msees (n, k) << endl;
    return 0;
}

int msees (int x, int y) {
    if (x == 1)
        return total + y;
    return y + xishu * msees (x - 1, y);
}

