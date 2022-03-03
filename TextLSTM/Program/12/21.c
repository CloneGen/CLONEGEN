int main () {
    while (1) {
        int num [16] = {0};
        cin >> num[0];
        if (num[0] == -1)
            break;
        int sum = 1;
        for (;; sum++) {
            cin >> num[sum];
            if (num[sum] == 0) {
                sum--;
                break;
            }
        }
        int twice = 0;
        for (int i = 0;
        i < sum; i++) {
            for (int j = i + 1;
            j <= sum; j++) {
                if ((num[j] == 2 * num[i]) || (num[i] == 2 * num[j]))
                    twice++;
            }
        }
        cout << twice << endl;
    }
    cin.get ();
    cin.get ();
    return 0;
}

