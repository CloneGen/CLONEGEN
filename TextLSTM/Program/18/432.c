int a [100] [100], n, sum;

void evaluation () {
    for (int i = 0;
    i < n; i++) {
        for (int j = 1;
        j < n - 1; j++) {
            a[i][j] = a[i][j + 1];
        }
    }
    for (int j = 0;
    j < n; j++) {
        for (int i = 1;
        i < n - 1; i++) {
            a[i][j] = a[i + 1][j];
        }
    }
    n--;
}

int operation () {
    int min;
    if (n == 1) {
        cout << sum << endl;
        return 0;
    }
    else {
        for (int i = 0;
        i < n; i++) {
            min = 100000;
            for (int j = 0;
            j < n; j++) {
                if (a[i][j] < min)
                    min = a[i][j];
            }
            for (int j = 0;
            j < n; j++)
                a[i][j] -= min;
        }
        for (int j = 0;
        j < n; j++) {
            min = 100000;
            for (int i = 0;
            i < n; i++) {
                if (a[i][j] < min)
                    min = a[i][j];
            }
            for (int i = 0;
            i < n; i++)
                a[i][j] -= min;
        }
        sum += a[1][1];
        evaluation ();
        operation ();
    }
}

int main () {
    int N;
    cin >> N;
    for (int k = 0;
    k < N; k++) {
        sum = 0;
        n = N;
        for (int i = 0;
        i < n; i++) {
            for (int j = 0;
            j < n; j++) {
                cin >> a[i][j];
            }
        }
        operation ();
    }
    return 0;
}

