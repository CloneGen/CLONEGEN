int str [101] [101];

void input (int n) {
    for (int i = 0;
    i < n; i++)
        for (int j = 0;
        j < n; j++)
            cin >> str[i][j];
}

void zero (int n) {
    for (int i = 0;
    i < n; i++) {
        int max = str[i][0];
        for (int j = 0;
        j < n; j++)
            if (max > str[i][j])
                max = str[i][j];
        for (int j = 0;
        j < n; j++)
            str[i][j] -= max;
    }
    for (int i = 0;
    i < n; i++) {
        int max = str[0][i];
        for (int j = 0;
        j < n; j++)
            if (max > str[j][i])
                max = str[j][i];
        for (int j = 0;
        j < n; j++)
            str[j][i] -= max;
    }
}

void del (int n) {
    for (int i = 1;
    i < n - 1; i++) {
        str[0][i] = str[0][i + 1];
        str[i][0] = str[i + 1][0];
    }
    for (int i = 1;
    i < n - 1; i++)
        for (int j = 1;
        j < n - 1; j++)
            str[i][j] = str[i + 1][j + 1];
}

void cal (int n, int sum) {
    if (n == 2) {
        zero (2);
        sum += str[1][1];
        cout << sum << endl;
        return;
    }
    zero (n);
    sum += str[1][1];
    del (n);
    cal (n - 1, sum);
}

int main () {
    int n;
    cin >> n;
    for (int k = 1;
    k <= n; k++) {
        input (n);
        cal (n, 0);
    }
    return 0;
}

