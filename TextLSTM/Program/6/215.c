int main () {
    int j, i, m, n, *pointer = NULL, a [100] [100], sum = 0;
    cin >> j;
    for (i = 0; i < j; i++) {
        sum = 0;
        cin >> m >> n;
        pointer = *a;
        for (; pointer < *a + m * n; pointer++) {
            cin >> *pointer;
        }
        for (pointer = *a; pointer < *a + m * n; pointer++) {
            if (pointer >= *a && pointer <= *a + n - 1) {
                sum += *pointer;
                continue;
            }
            if ((pointer - *a) % n == 0) {
                sum += *pointer;
                sum += *(pointer + n - 1);
                continue;
            }
            if (pointer >= *a + m * n - n && pointer < *a + m * n - 1) {
                sum += *pointer;
                continue;
            }
        }
        cout << sum << endl;
    }
    return 0;
}

