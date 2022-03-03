int data [10000] [10000] = {0};

int main () {
    int n;
    cin >> n;
    int x, y;
    while (1) {
        cin >> x >> y;
        if (x == 0 && y == 0)
            break;
        data[x][y] = 1;
    }
    x = 0;
    y = 1;
    while (y < n) {
        if (data[x][y] == 1) {
            x = y;
        }
        y++;
    }
    int m;
    for (m = 0; m < n; m++) {
        if (m == x)
            continue;
        if (!(data[m][x] == 1 && data[x][m] == 0)) {
            break;
        }
    }
    if (m == n)
        cout << x << endl;
    else
        cout << "NOT FOUND" << endl;
    return 0;
}

