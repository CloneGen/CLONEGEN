int main () {
    int num, i;
    int m, n = 0, t = 0;
    int j [20];
    cin >> num;
    while (num > 0) {
        cin >> m;
        if (m == 0)
            cout << 60 << endl;
        else {
            for (i = 0; i < m; i++)
                cin >> j[i];
            for (i = 0; i < m; i++) {
                if (j[0] > 60) {
                    cout << 60 << endl;
                    break;
                }
                n = j[i];
                t = 3 * i + j[i];
                if (t + 3 > 60) {
                    cout << n << endl;
                    break;
                }
                t = t + 3;
                if (i == m - 1) {
                    n = n + (60 - t);
                    cout << n << endl;
                    break;
                }
                else {
                    if (t + j[i + 1] - j[i] > 60) {
                        n = n + (60 - t);
                        cout << n << endl;
                        break;
                    }
                }
            }
        }
        num--;
    }
    return 0;
}

