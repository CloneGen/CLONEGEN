int main () {
    int n;
    cin >> n;
    int y [200], m1 [200], m2 [200];
    for (int i = 0;
    i < n; i++)
        cin >> y[i] >> m1[i] >> m2[i];
    for (int j = 0;
    j < n; j++) {
        if (y[j] % 4 == 0 && y[j] % 100 != 0 || y[j] % 400 == 0) {
            int a [12] = {31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366};
            if (m1[j] == 1) {
                if (a[m2[j] - 2] % 7 == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else if (m2[j] == 1) {
                if (a[m1[j] - 2] % 7 == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else {
                if (abs (a[m1[j] - 2] - a[m2[j] - 2]) % 7 == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
        else {
            int b [12] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
            if (m1[j] == 1) {
                if (b[m2[j] - 2] % 7 == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else if (m2[j] == 1) {
                if (b[m1[j] - 2] % 7 == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else {
                if (abs (b[m1[j] - 2] - b[m2[j] - 2]) % 7 == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}

