int main () {
    int peach [100];
    int i, n, k, m;
    cin >> n >> k;
    peach[n] = n + k;
    for (i = n; i >= 2; i--) {
        if (peach[i] % (n - 1) == 0)
            peach[i - 1] = peach[i] / (n - 1) * n + k;
        else {
            peach[n] = peach[n] + n;
            i = n + 1;
        }
    }
    cout << peach[1] << endl;
    return 0;
}

