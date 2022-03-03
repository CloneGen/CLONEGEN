int main () {
    int n, h = 0, t = 0;
    cin >> n;
    int sbp [n], dbp [n];
    for (int i = 0;
    i < n; i++)
        cin >> sbp[i] >> dbp[i];
    for (int i = 0;
    i < n; i++) {
        if (sbp[i] >= 90 && sbp[i] <= 140 && dbp[i] >= 60 && dbp[i] <= 90) {
            h += 1;
            t = (t > h ? t : h);
        }
        else
            h = 0;
    }
    cout << t << endl;
    return 0;
}

