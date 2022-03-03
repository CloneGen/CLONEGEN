int main () {
    int n, k;
    cin >> n >> k;
    for (int i = 1;
    i > 0; i++) {
        int get = i;
        for (int j = n - 1;
        j > 0; j--) {
            if ((get * n + k) % (n - 1)) {
                get = 0;
                break;
            }
            get = (get * n + k) / (n - 1);
        }
        if (get) {
            cout << (get * n + k);
            break;
        }
    }
}

