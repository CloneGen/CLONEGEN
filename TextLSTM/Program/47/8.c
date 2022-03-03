const  int maxn = 100;

int main () {
    int a [maxn], b [maxn];
    int n, i = 0, j = 0;
    cin >> n;
    while (i <= (n - 1)) {
        cin >> a[i];
        b[n - 1 - i] = a[i];
        i++;
    }
    while (j < (n - 1)) {
        cout << b[j] << " ";
        j++;
    }
    if (j == (n - 1))
        cout << b[j];
    return 0;
}

