int main () {
    int a [10] [10] = {0};
    int max [10] = {0};
    int m [10] = {0};
    int min [10] = {0};
    for (int i = 1;
    i <= 5; i++) {
        for (int j = 1;
        j <= 5; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1;
    i <= 5; i++) {
        max[i] = a[i][1];
        for (int j = 1;
        j <= 5; j++) {
            if (max[i] <= a[i][j]) {
                max[i] = a[i][j];
                m[i] = j;
            }
        }
    }
    for (int j = 1;
    j <= 5; j++) {
        min[j] = a[1][j];
        for (int i = 2;
        i <= 5; i++) {
            if (min[j] > a[i][j]) {
                min[j] = a[i][j];
            }
        }
    }
    int count = 0;
    for (int i = 1;
    i <= 5; i++) {
        if (max[i] == min[m[i]]) {
            cout << i << " " << m[i] << " " << max[i] << endl;
        }
        else
            count++;
    }
    if (count == 5)
        cout << "not found" << endl;
    return 0;
}

