int count (int num, int m) {
    if (num % m != 0)
        return 0;
    if (num == m)
        return 1;
    else {
        int counter = 0;
        for (int i = m;
        i <= num / m; i++) {
            counter += count (num / m, i);
        }
        return counter;
    }
}

int main () {
    int n, num;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        int counter = 0;
        cin >> num;
        for (int i = 2;
        i <= num; i++)
            counter += count (num, i);
        cout << counter << endl;
    }
    return 0;
}

