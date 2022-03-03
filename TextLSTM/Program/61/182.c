int main () {
    int n, a [1000], b [1000], N [1000];
    cin >> n;
    for (int j = 1;
    j <= n; j++) {
        cin >> b[j];
        if (b[j] < 3)
            cout << "1" << endl;
        else {
            for (int i = 3;
            i <= b[j]; i++) {
                a[1] = 1, a[2] = 1;
                a[i] = a[i - 1] + a[i - 2];
            }
            N[j] = a[b[j]];
            cout << N[j] << endl;
        }
    }
    return 0;
}

