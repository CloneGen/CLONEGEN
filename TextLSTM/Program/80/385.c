int judge (int y) {
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 1;
    else
        return 0;
}

int main () {
    int mouth [2] [13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    int y1, y2, m1, m2, d1, d2, s1 = 0, s2 = 0, s3 = 0, s = 0;
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
    if (y1 == y2) {
        for (int i = m1;
        i < m2; i++) {
            s = s + mouth[judge (y1)][i];
        }
        cout << s + d2 - d1 << endl;
    }
    else {
        for (int i = m1;
        i <= 12; i++) {
            s1 = s1 + mouth[judge (y1)][i];
        }
        s1 = s1 - d1;
        for (int i = 1;
        i < m2; i++) {
            s2 = s2 + mouth[judge (y2)][i];
        }
        s2 = s2 + d2;
        for (int i = y1 + 1;
        i < y2; i++) {
            if (judge (i) == 1)
                s3 = s3 + 366;
            else
                s3 = s3 + 365;
        }
        s = s1 + s2 + s3;
        cout << s << endl;
    }
    return 0;
}

