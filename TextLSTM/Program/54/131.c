int n, k, m;

int f (int num) {
    if (m % (n - 1) == 0) {
        m = m * n / (n - 1) + k;
    }
    else
        return 0;
    if (num == 1)
        return 1;
    else
        return f (num - 1);
}

int main () {
    cin >> n >> k;
    int p;
    p = m = n + k;
    while (1) {
        if (f (n - 1))
            break;
        else
            m = p += n;
    }
    cout << m << endl;
    return 0;
}

