int change (int a, int p) {
    int i, count = 0;
    for (i = p; i < a; i++) {
        if (a % i == 0 && a / i >= i) {
            count++;
            int k, t;
            k = (int) sqrt (a / i);
            for (t = 2; t <= k; t++) {
                if ((a / i) % t == 0) {
                    count += change (a / i, i);
                    break;
                }
            }
        }
    }
    return count;
}

int main () {
    int n, i, a;
    cin >> n;
    for (i = 1; i <= n; i++) {
        int total = 0;
        cin >> a;
        total += change (a, 2);
        cout << total + 1 << endl;
    }
    return 0;
}

