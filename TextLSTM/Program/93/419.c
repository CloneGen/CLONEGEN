int main () {
    int n = 0, i = 0, k = 0;
    int Sub [3] = {0, 0, 0};
    cin >> n;
    if (n % 3 == 0) {
        Sub[i] = 3;
        i++;
    }
    if (n % 5 == 0) {
        Sub[i] = 5;
        i++;
    }
    if (n % 7 == 0) {
        Sub[i] = 7;
        i++;
    }
    if (Sub[0] == 0)
        cout << 'n';
    else {
        for (k = 0; k < i - 1; k++)
            cout << Sub[k] << ' ';
        cout << Sub[i - 1];
    }
    return 0;
}

