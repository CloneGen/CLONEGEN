int main () {
    int n;
    int shun [100];
    int ni [100];
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> shun[i];
    }
    for (int j = 0;
    j < n; j++) {
        ni[j] = shun[n - 1 - j];
    }
    cout << ni[0];
    for (int k = 1;
    k < n; k++) {
        cout << ' ' << ni[k];
    }
    return 0;
}

