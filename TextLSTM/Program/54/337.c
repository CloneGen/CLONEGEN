int n, k;

int ping (int no, int num) {
    if (no == 0) {
        cout << num << endl;
        return 1;
    }
    int x;
    x = num * n;
    if (x % (n - 1) != 0)
        return 0;
    return ping (no - 1, x / (n - 1) + k);
}

int main () {
    int i = 1;
    cin >> n >> k;
    while (1) {
        if (ping (n, i) == 1)
            break;
        i++;
    }
    return 0;
}

