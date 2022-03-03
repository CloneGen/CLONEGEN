int max (int a, int b) {
    return a > b ? a : b;
}

int main () {
    int n, a, b, ans;
    int sum = 0;
    cin >> n;
    sum = 0;
    ans = 0;
    for (int i = 1;
    i <= n; i++) {
        cin >> a >> b;
        if ((a >= 90 && a <= 140) && (b >= 60 && b <= 90)) {
            sum++;
            ans = max (ans, sum);
        }
        else
            sum = 0;
    }
    cout << ans << endl;
    return 0;
}

