int main () {
    int num [20000];
    int i, j, k, h;
    int check [20000];
    int n;
    cin >> n;
    check[0] = 0;
    for (i = 0; i < n; i++) {
        cin >> num[i];
    }
    for (j = 1; j < n; j++) {
        check[j] = 0;
        for (k = 0; k < j; k++) {
            if (num[j] == num[k]) {
                check[j] = 1;
                break;
            }
        }
    }
    cout << num[0];
    for (h = 1; h < n; h++) {
        if (check[h] == 0)
            cout << " " << num[h];
    }
    return 0;
}

