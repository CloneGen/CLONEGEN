int main () {
    int *p1 = NULL, *p2 = NULL, a [10000] = {0}, i, j, n;
    int b [100000], c [100000];
    p1 = b;
    p2 = c;
    cin >> n;
    for (i = 0;; i++) {
        cin >> *p1 >> *p2;
        if (*p1 == 0 && *p2 == 0)
            break;
        for (j = 0;; j++) {
            if (j == *p2) {
                a[j]++;
                break;
            }
        }
        p1++;
        p2++;
    }
    int k = 0;
    for (j = 0;; j++) {
        if (a[j] == n - 1) {
            for (; i > 1; i--) {
                if (*--p1 == j)
                    break;
            }
            if (i == 1) {
                cout << j;
                k = 1;
                break;
            }
        }
    }
    if (k == 0) {
        cout << "NOT FOUND";
    }
    return 0;
}

