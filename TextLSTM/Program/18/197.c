int a [100] [100];
int i, j, n, sum = 0;

void xiaojian (int times) {
    for (i = 0; i < times; i++)
        for (j = 1; j < times - 1; j++) {
            a[i][j] = a[i][j + 1];
        }
    for (j = 0; j < times; j++)
        for (i = 1; i < times - 1; i++)
            a[i][j] = a[i + 1][j];
    return;
}

int F (int times) {
    if (times == 1)
        return sum;
    else {
        int J [times];
        for (i = 0; i < times; i++) {
            J[i] = a[i][0];
            for (j = 0; j < times - 1; j++) {
                if (J[i] > a[i][j + 1])
                    J[i] = a[i][j + 1];
            }
            if (J[i] > 0)
                for (int t = 0;
                t < times; t++)
                    a[i][t] -= J[i];
        }
        int I [times];
        for (j = 0; j < times; j++) {
            I[j] = a[0][j];
            for (i = 0; i < times - 1; i++) {
                if (I[j] > a[i + 1][j])
                    I[j] = a[i + 1][j];
            }
            if (I[j] > 0)
                for (int t = 0;
                t < times; t++)
                    a[t][j] -= I[j];
        }
        sum += a[1][1];
        xiaojian (times);
        return F (times - 1);
    }
}

int main () {
    cin >> n;
    int t = 0;
    while (t < n) {
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        cout << F (n) << endl;
        sum = 0;
        t++;
    }
    return 0;
}

