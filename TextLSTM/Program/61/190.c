int f [20] = {1, 1};

void cal (int x) {
    f[x] = f[x - 1] + f[x - 2];
}

int main () {
    int n, a, needle = 1;
    for (cin >> n; n--;) {
        cin >> a;
        for (int i = needle + 1;
        i < a; i++)
            cal (i);
        cout << f[a - 1] << endl;
    }
    return 0;
}

