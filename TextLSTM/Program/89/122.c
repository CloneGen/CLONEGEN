int main () {
    int n, m = 0;
    cin >> n;
    int i, j, k = 0;
    int a [1000000], b [1000000] = {0};
    cin >> i >> j;
    int *p = a;
    *p = j;
    b[0] = 1;
    while (1) {
        int flag1 = 0;
        cin >> i >> j;
        if (i == 0 && j == 0)
            break;
        else {
            for (m = 0; m <= k; m++) {
                if (*(p + m) == j) {
                    b[m]++;
                    flag1 = 1;
                    break;
                }
            }
            if (flag1 == 0) {
                *(p + k + 1) = j;
                b[++k]++;
            }
        }
    }
    int flag2 = 0;
    for (m = 0; m <= k; m++) {
        if (b[m] == n - 1) {
            cout << *(p + m);
            flag2 = 1;
            break;
        }
    }
    if (flag2 == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

