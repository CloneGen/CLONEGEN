int m = 0, k, i, j, n;
int f (int x), panduan = 0;

int main () {
    cin >> n >> k;
    j = k;
    while (m == 0) {
        j = j + n;
        m = f (n);
        if (panduan != 0)
            m = 0;
        panduan = 0;
    }
    cout << m << endl;
    return 0;
}

int f (int x) {
    int y;
    if (x == 1)
        return j;
    else {
        y = f (x - 1);
        if (y % (n - 1) != 0) {
            panduan = 1;
            return 0;
        }
        else {
            return y * n / (n - 1) + k;
        }
    }
}

