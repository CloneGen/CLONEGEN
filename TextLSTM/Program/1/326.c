int fenjie (int x, int y) {
    int i, s = 0;
    if (x == y)
        return 1;
    for (i = y; i < x; i++)
        if (x % i == 0)
            s += fenjie (x / i, i);
    if (i == x)
        s++;
    return s;
}

int main () {
    int n, i;
    cin >> n;
    for (; n > 0; n--) {
        cin >> i;
        cout << fenjie (i, 2) << endl;
    }
    return 0;
}

