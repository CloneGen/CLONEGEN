int n, k, i;
int x [10000];

int f (int o) {
    while (true) {
        x[1] = o;
        for (i = 1; i < n; i++) {
            if (x[i] % (n - 1) == 0)
                x[i + 1] = n * x[i] / (n - 1) + k;
            else
                break;
        }
        if (i == n)
            return x[n];
        else {
            o = o + n;
        }
    }
}

int main () {
    cin >> n >> k;
    int o = n + k;
    cout << f (o);
}

