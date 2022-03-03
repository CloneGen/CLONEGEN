int main () {
    int a [5] [5], max [5] = {0}, b [5];
    for (int i = 0;
    i < 5; i++) {
        for (int j = 0;
        j < 5; j++) {
            cin >> a[i][j];
            if (a[i][j] > max[i])
                max[i] = a[i][j];
        }
    }
    for (int i = 0;
    i < 5; i++) {
        for (int j = 0;
        j < 5; j++) {
            if (a[i][j] == max[i])
                b[i] = j;
        }
    }
    int andian = 0;
    for (int x = 0;
    x < 5; x++) {
        int num = 0;
        for (int i = 0;
        i < 5; i++) {
            if ((i != x) && (a[i][b[x]] <= max[x]))
                break;
            else
                num++;
        }
        if (num == 5) {
            andian = 1;
            cout << x + 1 << " " << b[x] + 1 << " " << max[x];
        }
    }
    if (andian == 0)
        cout << "not found";
    return 0;
}

