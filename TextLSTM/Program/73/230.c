int main () {
    int a [6] [6], i, j, max [6], min [6], m = 0;
    for (i = 1; i < 6; i++)
        for (j = 1; j < 6; j++) {
            cin >> a[i][j];
        }
    for (i = 1; i < 6; i++) {
        max[i] = 1;
        for (j = 2; j < 6; j++) {
            if (a[i][max[i]] < a[i][j])
                max[i] = j;
        }
    }
    for (j = 1; j < 6; j++) {
        min[j] = 1;
        for (i = 2; i < 5; i++) {
            if (a[min[j]][j] > a[i][j])
                min[j] = i;
        }
    }
    for (i = 1; i < 6; i++)
        for (j = 1; j < 6; j++) {
            if ((min[j] == i) && (max[i] == j)) {
                cout << i << " " << j << " " << a[i][j];
                m = m + 1;
            }
        }
    if (m == 0)
        cout << "not found";
    return 0;
}

