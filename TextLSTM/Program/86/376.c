int main () {
    int n, m, num [100] = {0}, i, j, time;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> m;
        for (j = 0; j < m; j++)
            cin >> num[j];
        for (j = 0; j < m; j++) {
            time = num[j] + j * 3;
            if ((time >= 57) && (time <= 60)) {
                cout << num[j] << endl;
                break;
            }
            if (time > 60) {
                num[j] = num[j] - (time - 60);
                cout << num[j] << endl;
                break;
            }
        }
        if (j == m) {
            num[j] = 60 - j * 3;
            cout << num[j] << endl;
        }
    }
    return 0;
}

