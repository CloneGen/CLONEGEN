int main () {
    int n = 0;
    int num1 [100000];
    int num2 [100000];
    int flag [100000];
    int except [100000];
    int i = 0;
    int j = 0;
    int p = 0;
    int sum = 0;
    int f = 0;
    memset (num1, 0, sizeof (num1));
    memset (num2, 0, sizeof (num2));
    memset (flag, 0, sizeof (flag));
    memset (except, 0, sizeof (except));
    cin >> n;
    while (1) {
        cin >> num1[i] >> num2[i];
        except[num1[i]]++;
        if ((num1[i] == 0) && (num2[i] == 0))
            break;
        i++;
    }
    for (j = 0; j < n; j++) {
        if (except[j] != 0)
            continue;
        sum = 0;
        memset (flag, 0, sizeof (flag));
        for (p = 0; p < i; p++) {
            if (num2[p] == j)
                if (flag[num1[p]] == 0)
                    flag[num1[p]]++;
        }
        for (p = 0; p < n; p++)
            sum += flag[p];
        if (sum == n - 1) {
            cout << j;
            f = 1;
        }
    }
    if (f == 0)
        cout << "NOT FOUND";
    return 0;
}

