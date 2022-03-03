int main () {
    int count [100000], beasked [100000], answer [100000], i, n, sum = 0;
    memset (count, 0, sizeof (count));
    cin >> n;
    for (i = 0; i < n * (n - 1); i++) {
        cin >> beasked[i] >> answer[i];
        if (beasked[i] == 0 && answer[i] == 0)
            break;
        else
            count[answer[i]]++;
        sum++;
    }
    int flag = 0;
    for (i = 0; i < n; i++) {
        int know = 0;
        if (count[i] == n - 1) {
            for (int j = 0;
            j < sum; j++) {
                if (beasked[j] == i)
                    know++;
            }
            if (know == 0) {
                cout << i << endl;
                flag = 1;
            }
        }
    }
    if (flag == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

