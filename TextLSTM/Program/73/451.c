int main () {
    int a [6] [6];
    int i, j;
    for (i = 1; i < 6; i++)
        for (j = 1; j < 6; j++)
            cin >> a[i][j];
    int big = 0, small = 1, line, row;
    for (i = 1; i < 6; i++) {
        line = i;
        row = 1;
        big = a[i][1];
        for (j = 2; j < 6; j++) {
            if (a[i][j] > big) {
                big = a[i][j];
                row = j;
            }
        }
        for (j = 1; j < 6; j++) {
            if (a[j][row] < big)
                break;
        }
        if (j == 6)
            cout << line << " " << row << " " << big << endl;
        else
            small++;
    }
    if (small == 6)
        cout << "not found" << endl;
    return 0;
}

