int main () {
    int n;
    cin >> n;
    int num [100000] = {0};
    for (int i = 0;
    i < n; i++) {
        cin >> num[i];
    }
    int k;
    cin >> k;
    int j;
    for (j = 0; j < n; j++) {
        if (num[j] != k) {
            cout << num[j];
            break;
        }
    }
    for (int i = j + 1;
    i < n; i++) {
        if (num[i] != k) {
            cout << " " << num[i];
        }
    }
    return 0;
}

