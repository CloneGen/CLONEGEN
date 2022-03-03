int main () {
    int i, j, h [5], l [5], hang = 0, lie, num;
    int a [5] [5];
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
            cin >> a[i][j];
    }
    for (i = 0; i < 5; i++) {
        h[i] = a[i][0];
        for (j = 0; j < 5; j++) {
            if (a[i][j] > h[i])
                h[i] = a[i][j];
        }
    }
    for (j = 0; j < 5; j++) {
        l[j] = a[0][j];
        for (i = 0; i < 5; i++) {
            if (a[i][j] < l[j])
                l[j] = a[i][j];
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if ((a[i][j] == h[i]) && (a[i][j] == l[j])) {
                hang = i + 1;
                lie = j + 1;
                num = a[i][j];
            }
        }
    }
    if (hang == 0)
        cout << "not found" << endl;
    else
        cout << hang << " " << lie << " " << num << endl;
    return 0;
}

