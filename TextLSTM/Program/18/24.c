int n;

int min (int x []) {
    int i, j;
    for (i = 0; i < n; i++) {
        if (x[i] < 0)
            continue;
        for (j = 0; j < n; j++) {
            if (x[i] > x[j] && x[j] >= 0)
                break;
        }
        if (j == n)
            return x[i];
    }
    return 0;
}

void cut (int a [50] [50], int k) {
    int i, j, m;
    for (i = 0; i < n; i++) {
        m = min (a[i]);
        for (j = 0; j < n; j++) {
            a[i][j] -= m;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            m = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = m;
        }
    }
    for (i = 0; i < n; i++) {
        m = min (a[i]);
        for (j = 0; j < n; j++) {
            a[i][j] -= m;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            m = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = m;
        }
    }
}

void xiaojian (int a [50] [50], int k) {
    int i;
    for (i = 0; i < n; i++) {
        a[k][i] = -1;
        a[i][k] = -1;
    }
}

int main () {
    int a [50] [50] [50], j, i, k, l, sum;
    scanf ("%d", &n);
    for (k = 0; k < n; k++) {
        for (j = 0; j < n; j++) {
            for (i = 0; i < n; i++) {
                scanf ("%d", &a[k][j][i]);
            }
        }
        sum = 0;
        for (j = 1; j < n; j++) {
            cut (a[k], j);
            sum = sum + a[k][j][j];
            xiaojian (a[k], j);
        }
        printf ("%d\n", sum);
    }
}

