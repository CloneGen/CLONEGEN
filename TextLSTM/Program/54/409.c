int main () {
    int n, k, apple [100], i;
    cin >> n >> k;
    apple[n] = n + k;
    for (i = n - 1; i >= 1; i--) {
        if (apple[i + 1] % (n - 1) == 0) {
            apple[i] = apple[i + 1] / (n - 1) * n + k;
        }
        else {
            apple[n] += n;
            i = n;
            continue;
        }
    }
    cout << apple[1] << endl;
    return 0;
}

