int f (int a, int j);

int main () {
    int n, a, s, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a;
        s = f (a, 2) + 1;
        cout << s << endl;
    }
    return 0;
}

int f (int a, int j) {
    int i, tem;
    int count = 0;
    for (i = j; i <= sqrt (a); i++) {
        if (a % i == 0) {
            j = i;
            if (a / i < j)
                count += 1;
            else
                count += (f (a / i, j) + 1);
        }
    }
    return count;
}

