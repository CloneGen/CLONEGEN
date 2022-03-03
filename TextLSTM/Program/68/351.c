int prime [20000];
int vis [50001] = {0};

int isprime (int x) {
    int m = (int) floor (sqrt (x) + 0.5);
    if (x % 2 == 0)
        return 0;
    for (int i = 3;
    i <= m; i += 2)
        if (x % i == 0)
            return 0;
    return 1;
}

int main () {
    int n, k = 0;
    cin >> n;
    for (int i = 6;
    i <= n; i += 2)
        for (int j = 3;
        ; j += 2)
            if (isprime (j) && isprime (i - j)) {
                int z = i - j;
                cout << i << "=" << j << "+" << z << endl;
                break;
            }
    return 0;
}

