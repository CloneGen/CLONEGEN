int main () {
    int n, shou, shu, p = 0, q = 0, k;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> shou >> shu;
        k = ((shou >= 90) && (shou <= 140) && (shu >= 60) && (shu <= 90));
        q += k;
        if (k == 0) {
            q = 0;
            continue;
        }
        p = p >= q ? p : q;
    }
    cout << p << endl;
    return 0;
}

