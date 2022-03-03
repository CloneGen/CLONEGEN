int main () {
    int m, i = 3, j, x, y;
    int a, b, c = 1;
    cin >> m;
    for (i = 3; i <= m / 2; i = i + 2) {
        c = 1;
        j = m - i;
        x = sqrt (i);
        y = sqrt (j);
        for (a = 2; a <= x; a++) {
            if (i % a == 0) {
                c = 0;
                break;
            }
        }
        for (b = 2; b <= y; b++) {
            if (j % b == 0) {
                c = 0;
                break;
            }
        }
        if (c == 1) {
            cout << i << " " << j << endl;
        }
    }
    return 0;
}

