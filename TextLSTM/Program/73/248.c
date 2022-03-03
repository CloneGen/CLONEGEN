int main () {
    int a [6] [6];
    for (int i = 1;
    i <= 5; i++)
        for (int j = 1;
        j <= 5; j++) {
            cin >> a[i][j];
        }
    int max_row [6] = {0}, min_column [6] = {0};
    int line_row [6] = {0}, line_column [6] = {0, 1, 1, 1, 1, 1};
    for (int j = 1;
    j <= 5; j++)
        min_column[j] = a[1][j];
    for (int i = 1;
    i <= 5; i++)
        for (int j = 1;
        j <= 5; j++) {
            if (a[i][j] > max_row[i]) {
                max_row[i] = a[i][j];
                line_row[i] = j;
            }
            if (a[i][j] < min_column[j]) {
                min_column[j] = a[i][j];
                line_column[j] = i;
            }
        }
    int success = 0;
    for (int i = 1;
    i <= 5; i++)
        if (line_row[line_column[i]] == i) {
            cout << line_column[i] << " " << i << " " << a[line_column[i]][i];
            success = 1;
        }
    if (success == 0)
        cout << "not found" << endl;
    return 0;
}

