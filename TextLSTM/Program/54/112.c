int n;
int k;
int a [10000];

int main () {
    int t = 1;
    int i;
    cin >> n >> k;
    for (i = 0; i < n - 1; i++)
        t *= (n - 1);
    for (a[n] = n + k; (a[n] + k * (n - 1)) % t != 0; a[n] += n)
        ;
    for (i = n - 1; i >= 1; i--) {
        a[i] = (a[i + 1] * n) / (n - 1) + k;
    }
    cout << a[1];
    return 0;
}

