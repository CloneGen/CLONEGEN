int main () {
    int n, a [20000], i, num, count [20000] = {0};
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        num = a[i];
        count[num]++;
        if (i == 0)
            cout << a[i];
        else {
            if (count[num] == 1)
                cout << " " << num;
        }
    }
    cout << endl;
    return 0;
}

