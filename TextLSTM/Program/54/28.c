long ppow (int a, int b) {
    if (b == 1)
        return (long) a;
    else if (b % 2) {
        long t = ppow (a, (b - 1) / 2);
        return t * t * a;
    }
    else {
        long t = ppow (a, b / 2);
        return t * t;
    }
}

int main () {
    int n, k;
    cin >> n >> k;
    long ans;
    ans = ppow (n, n) - (n - 1) * k;
    cout << ans << endl;
    return 0;
}

