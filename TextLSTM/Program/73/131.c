int main () {
    int a [6] [6] = {0}, k = 0, m = 0, count = 0;
    for (int i = 1;
    i <= 5; i++) {
        for (int j = 1;
        j <= 5; j++) {
            cin >> a[i][j];
        }
    }
    for (k = 1; k <= 5; k++) {
        for (m = 1; m <= 5; m++) {
            if ((a[m][k] > a[1][k]) || (a[m][k] > a[2][k]) || (a[m][k] > a[3][k]) || (a[m][k] > a[4][k]) || (a[m][k] > a[5][k]) || (a[m][k] < a[m][1]) || (a[m][k] < a[m][2]) || (a[m][k] < a[m][3]) || (a[m][k] < a[m][4]) || (a[m][k] < a[m][5])) {
                if ((m == 5) && (k == 5) && (count == 0))
                    cout << "not found" << endl;
            }
            else {
                cout << m << " " << k << " " << a[m][k] << endl;
                count = 1;
                break;
            }
        }
    }
    return 0;
}

