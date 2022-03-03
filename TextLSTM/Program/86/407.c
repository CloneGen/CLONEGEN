int main () {
    int n, m, i, j, k;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> m;
        if (m == 0) {
            cout << "60" << endl;
        }
        else {
            int num [60] = {0};
            k = 0;
            for (j = 1; j <= m; j++) {
                cin >> num[j];
                if (num[j] + j * 3 <= 63)
                    k = j;
            }
            if (num[k] + k * 3 <= 60)
                cout << 60 - k * 3 << endl;
            else
                cout << num[k] << endl;
        }
    }
    return 0;
}

