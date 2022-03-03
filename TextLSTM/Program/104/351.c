int main () {
    int A, B, i, j, a [20], b [20], n1, n2, sign = 0;
    cin >> A >> B;
    for (i = 1; A > 1; i++) {
        a[i] = A;
        if (A % 2 == 0)
            A = A / 2;
        else
            A = (A -1) / 2;
    }
    a[i] = A;
    n1 = i;
    for (i = 1; B > 1; i++) {
        b[i] = B;
        if (B % 2 == 0)
            B = B / 2;
        else
            B = (B -1) / 2;
    }
    b[i] = B;
    n2 = i;
    for (i = 1; i <= n1 && sign == 0; i++)
        for (j = 1; j <= n2 && sign == 0; j++)
            if (b[j] == a[i])
                sign = 1;
    cout << a[i - 1];
    return 0;
}

