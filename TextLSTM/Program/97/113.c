int main () {
    int n, i, a [6] = {100, 50, 20, 10, 5, 1};
    cin >> n;
    for (i = 0; i <= 5; i++) {
        cout << (n - n % a[i]) / a[i] << endl;
        n = n % a[i];
    }
    return 0;
}

