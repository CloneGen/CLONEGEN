int main () {
    int n, i, s = 0, k;
    cin >> n;
    for (i = 1; i <= n; i++) {
        if (i % 7 == 0)
            continue;
        k = i;
        while (k != 0) {
            if (k % 10 == 7) {
                s -= i * i;
                break;
            }
            else
                k = k / 10;
        }
        s += i * i;
    }
    cout << s << endl;
    return 0;
}

