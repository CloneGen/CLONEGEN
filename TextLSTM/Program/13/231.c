int main () {
    int n, count [101] = {0}, num;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> num;
        if (count[num] == 0)
            if (i == 1)
                cout << num;
            else
                cout << " " << num;
        count[num]++;
    }
    return 0;
}

