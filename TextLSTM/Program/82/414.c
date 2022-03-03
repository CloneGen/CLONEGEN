int main () {
    int n, h, l, t, i, T;
    cin >> n;
    i = t = T = 0;
    while (++i <= n) {
        cin >> h >> l;
        t = (140 >= h && h >= 90 && 90 >= l && l >= 60) ? t + 1 : 0;
        T = (t > T) ? t : T;
    }
    cout << T << endl;
    return 0;
}

