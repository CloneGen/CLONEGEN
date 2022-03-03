int main () {
    int n;
    cin >> n;
    int a [3] = {3, 5, 7};
    if (n % 3 == 0 && n % 7 == 0 && n % 5 == 0)
        cout << "3 5 7";
    else if (!(n % 3 == 0 || n % 7 == 0 || n % 5 == 0))
        cout << "n";
    else {
        int k = 0;
        int b [2];
        for (int i = 0;
        i < 3; i++) {
            if (n % a[i] == 0) {
                b[k] = a[i];
                k = k + 1;
            }
        }
        for (int j = 0;
        j < k; j++) {
            if (j == k - 1)
                cout << b[j];
            else
                cout << b[j] << " ";
        }
    }
    return 0;
}

