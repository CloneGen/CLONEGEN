int main () {
    int i, n, s, a, b, c;
    cin >> n;
    if (n < 100 && n > 0) {
        s = 0;
        for (i = 1; i <= n; i++) {
            a = i % 7;
            b = i % 10;
            c = i / 10;
            if (a == 0 || b == 7 || c == 7)
                s = s;
            else
                s = s + i * i;
        }
        cout << s << endl;
    }
    else
        cout << "error" << endl;
    return 0;
}

