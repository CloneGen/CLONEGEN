int main () {
    int n, i, j, amount;
    int times [20] [10];
    int m [20];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> m[i];
        for (j = 0; j < m[i]; j++) {
            cin >> times[i][j];
        }
    }
    for (i = 0; i < n; i++) {
        if (m[i] == 0)
            cout << "60" << endl;
        else {
            for (j = m[i] - 1; j >= 0; j--) {
                if ((times[i][j] + 3 * j >= 57) && (times[i][j] + 3 * j <= 60)) {
                    cout << times[i][j] << endl;
                    break;
                }
                else if (times[i][j] + 3 * j < 57) {
                    amount = 60 - 3 * (j + 1);
                    cout << amount << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

