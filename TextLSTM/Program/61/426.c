int main () {
    int a [20], n, i = 1;
    cin >> n;
    while (i <= n) {
        cin >> a[i];
        i = i + 1;
    }
    int C;
    i = 1;
    while (i <= n) {
        if (a[i] == 1) {
            cout << "1" << endl;
            i = i + 1;
        }
        else if (a[i] == 2) {
            cout << "1" << endl;
            i = i + 1;
        }
        else {
            int A = 1, B = 1;
            while (a[i] - 2 > 0) {
                C = A +B;
                A = B;
                B = C;
                a[i] = a[i] - 1;
            }
            cout << C << endl;
            i = i + 1;
        }
    }
    return 0;
}

