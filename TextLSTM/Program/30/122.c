int main () {
    int i, s, m, x, k, n;
    float h;
    cin >> n;
    for (i = 1, s = 0; i <= n; i++) {
        for (m = i, x = 0; m != 0; m = (m - k) / 10) {
            k = m % 10;
            if (k == 7) {
                x++;
                break;
            }
        }
        if ((i % 7 != 0) && (x == 0))
            s += i * i;
    }
    cout << s << endl;
    return 0;
}

