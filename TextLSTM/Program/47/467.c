int main () {
    int n = 0, i = 0, j = 0;
    int num [100];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> num[i];
    }
    j = n - 1;
    do {
        cout << num[j];
        if (j > 0) {
            cout << " ";
        }
        j--;
    }
    while (j >= 0);
    return 0;
}

