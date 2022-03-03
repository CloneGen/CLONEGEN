int main (int argc, char **argv) {
    int n;
    int num [500];
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> num[i];
    }
    for (int i = 0;
    i < n; i++) {
        for (int j = n - 1;
        j > i; j--) {
            if (num[j - 1] > num[j]) {
                int tmp = num[j - 1];
                num[j - 1] = num[j];
                num[j] = tmp;
            }
        }
    }
    int cnt = 0;
    for (int i = 0;
    i < n; i++) {
        if (num[i] % 2 == 1) {
            if (cnt != 0) {
                cout << ',';
            }
            cout << num[i];
            cnt++;
        }
    }
    cout << endl;
    return 0;
}

