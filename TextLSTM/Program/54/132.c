int n, k, p;

int apple (int num) {
    if (num == n)
        return (n * p + k);
    int v, tot;
    v = apple (num + 1);
    while (v % (n - 1) != 0) {
        ++p;
        v = apple (num + 1);
    }
    tot = v + v / (n - 1) + k;
    return tot;
}

int main () {
    cin >> n >> k;
    p = 1;
    cout << apple (1);
    return 0;
}

