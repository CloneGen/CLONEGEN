int main () {
    int n, i;
    cin >> n;
    if (n == 0)
        cout << 0;
    else
        for (i = 1;; i++) {
            static int k;
            if (i == 1)
                k = 10;
            else
                k *= 10;
            if (n < k / 10)
                break;
            else {
                int c = n % k;
                cout << c / (k / 10);
            }
        }
    return 0;
}

