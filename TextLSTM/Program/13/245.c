int main () {
    int n, num, a [20001];
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> num;
        a[i - 1] = num;
        if (i == 1)
            cout << num;
        else {
            int j = 0;
            while (j < i - 1) {
                if (a[j] == num)
                    break;
                else
                    j++;
            }
            if (j == i - 1)
                cout << " " << num;
        }
    }
    cout << endl;
    return 0;
}

