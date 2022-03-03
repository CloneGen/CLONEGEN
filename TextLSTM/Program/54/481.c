int main () {
    int n, k, i;
    cin >> n >> k;
    int apple [n];
    apple[n - 1] = k;
    do {
        apple[n - 1] = apple[n - 1] + n;
        for (i = n - 2; i >= 0;) {
            if (apple[i + 1] % (n - 1) == 0) {
                apple[i] = apple[i + 1] / (n - 1) * n + k;
                i--;
            }
            else
                break;
        }
    }
    while (i >= 0);
    cout << apple[0] << endl;
    return 0;
}

