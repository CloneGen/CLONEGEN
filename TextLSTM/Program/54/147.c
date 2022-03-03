int n, k, f;

void go (int a, int step) {
    if (step == n) {
        cout << a;
        f = 1;
        return;
    }
    if (a % (n - 1) != 0)
        return;
    go (a * n / (n - 1) + k, step + 1);
}

int main () {
    int j, t;
    cin >> n >> k;
    for (j = n + k, f = 0; f == 0; j += n) {
        go (j, 1);
    }
    return 0;
}

