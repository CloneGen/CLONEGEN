int f (int i, int t);
int n, k;

int main () {
    cin >> n >> k;
    int m = 0;
    for (int i = n + k;
    (m = f (i, n)) == -1; i += n) {
    }
    cout << m;
    return 0;
}

int f (int i, int t) {
    return (t == 1 ? i : (i % (n - 1) ? -1 : (f ((i * n / (n - 1) + k), t - 1))));
}

