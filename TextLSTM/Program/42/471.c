int main () {
    int n [100001], k, n1, z = 0;
    cin >> n1;
    for (int i = 0;
    i < n1; i++) {
        cin >> n[i];
    }
    cin >> k;
    for (int i = 0;
    i < n1; i++) {
        if (n[i] != k) {
            z = z + 1;
            if (z == 1)
                cout << n[i];
            else
                cout << " " << n[i];
        }
    }
    return 0;
}

