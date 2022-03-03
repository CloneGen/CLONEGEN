int main () {
    int n, m, i, jump, sum;
    cin >> n;
    while (n--) {
        cin >> m;
        if (m == 0) {
            sum = 60;
            cout << sum << endl;
            continue;
        }
        for (i = 1; i <= m; i++) {
            cin >> jump;
            if (jump + i * 3 > 60 && jump + (i - 1) * 3 <= 60) {
                sum = jump;
                break;
            }
            else if (jump + (i - 1) * 3 > 60) {
                sum = 60 - (i - 1) * 3;
                break;
            }
            if (i == m)
                sum = 60 - i * 3;
        }
        cout << sum << endl;
        for (i = i + 1; i <= m; i++)
            cin >> jump;
    }
    return 0;
}

