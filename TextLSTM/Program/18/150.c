void putout (int a [N] [200], int num) {
    for (int i = 0;
    i < num; i++) {
        for (int j = 0;
        j < num; j++)
            cout << setw (3) << a[i][j];
        cout << endl;
    }
}

void cut1 (int a [N] [N], int b, int num) {
    int a1 [N] [N];
    memcpy (a1, a, N *N* sizeof (int));
    for (int i = num - 2;
    i >= 0; i--)
        a1[b][i] = min (a1[b][i], a1[b][i + 1]);
    for (int i = 0;
    i < num; i++)
        a[b][i] -= a1[b][0];
}

void cut2 (int a [N] [N], int b, int num) {
    int a1 [N] [N];
    memcpy (a1, a, N *N* sizeof (int));
    for (int i = num - 2;
    i >= 0; i--)
        a1[i][b] = min (a1[i][b], a1[i + 1][b]);
    for (int i = 0;
    i < num; i++)
        a[i][b] -= a1[0][b];
}

int remain (int a [N] [N], int num, int out) {
    for (int i = 0;
    i < num; i++)
        cut1 (a, i, num);
    for (int i = 0;
    i < num; i++)
        cut2 (a, i, num);
    out = out + a[1][1];
    for (int i = 1;
    i < num - 1; i++)
        for (int j = 0;
        j < num; j++)
            a[i][j] = a[i + 1][j];
    for (int i = 1;
    i < num - 1; i++)
        for (int j = 0;
        j < num - 1; j++)
            a[j][i] = a[j][i + 1];
    num--;
    if (num == 1)
        return out;
    else
        return remain (a, num, out);
}

int main () {
    int n;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        int a [N] [N];
        memset (a, 0, N *N* sizeof (int));
        for (int i = 0;
        i < n; i++)
            for (int j = 0;
            j < n; j++)
                cin >> a[i][j];
        int p = remain (a, n, 0);
        cout << p << endl;
    }
    return 0;
}

