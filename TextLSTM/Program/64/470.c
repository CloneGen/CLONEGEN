int main () {
    double s [45], l;
    int n, k = 0, m [90] [3], l1, l2, l3, l4, l5, l6, c [10] [3];
    cin >> n;
    for (int i = 0;
    i < n; i++)
        for (int j = 0;
        j < 3; j++)
            cin >> c[i][j];
    for (int i = 0;
    i < n - 1; i++)
        for (int j = i + 1;
        j < n; j++) {
            s[k] = sqrt (pow (c[i][0] - c[j][0], 2.0) + pow (c[i][1] - c[j][1], 2.0) + pow (c[i][2] - c[j][2], 2.0));
            m[k][0] = c[i][0];
            m[k][1] = c[i][1];
            m[k][2] = c[i][2];
            m[k + n * (n - 1) / 2][0] = c[j][0];
            m[k + n * (n - 1) / 2][1] = c[j][1];
            m[k + n * (n - 1) / 2][2] = c[j][2];
            k++;
        }
    for (int i = 1;
    i < k; i++)
        for (int j = 0;
        j < k - i; j++) {
            if (s[j] < s[j + 1]) {
                l = s[j];
                l1 = m[j][0];
                l2 = m[j][1];
                l3 = m[j][2];
                l4 = m[j + n * (n - 1) / 2][0];
                l5 = m[j + n * (n - 1) / 2][1];
                l6 = m[j + n * (n - 1) / 2][2];
                s[j] = s[j + 1];
                m[j][0] = m[j + 1][0];
                m[j][1] = m[j + 1][1];
                m[j][2] = m[j + 1][2];
                m[j + n * (n - 1) / 2][0] = m[j + n * (n - 1) / 2 + 1][0];
                m[j + n * (n - 1) / 2][1] = m[j + n * (n - 1) / 2 + 1][1];
                m[j + n * (n - 1) / 2][2] = m[j + n * (n - 1) / 2 + 1][2];
                s[j + 1] = l;
                m[j + 1][0] = l1;
                m[j + 1][1] = l2;
                m[j + 1][2] = l3;
                m[j + n * (n - 1) / 2 + 1][0] = l4;
                m[j + n * (n - 1) / 2 + 1][1] = l5;
                m[j + n * (n - 1) / 2 + 1][2] = l6;
            }
        }
    for (int i = 0;
    i < k; i++)
        cout << "(" << m[i][0] << "," << m[i][1] << "," << m[i][2] << ")-" << "(" << m[i + n * (n - 1) / 2][0] << "," << m[i + n * (n - 1) / 2][1] << "," << m[i + n * (n - 1) / 2][2] << ")=" << fixed << setprecision (2) << s[i] << endl;
    return 0;
}

