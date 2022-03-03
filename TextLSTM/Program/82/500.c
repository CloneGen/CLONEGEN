int max (int a, int b) {
    return a > b ? a : b;
}

int main () {
    int n, a, b, k = 0, sum = 0;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> a >> b;
        if ((a >= 90 && a <= 140) && (b >= 60 && b <= 90)) {
            sum++;
            k = max (k, sum);
        }
        else
            sum = 0;
    }
    cout << k << endl;
    return 0;
}

