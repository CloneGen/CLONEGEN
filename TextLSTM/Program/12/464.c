int main () {
    int n, num [15], i, j, s, t, answer;
    while (cin >> num[0]) {
        if (num[0] == -1)
            break;
        j = 0;
        answer = 0;
        do {
            j++;
            cin >> num[j];
        }
        while (num[j] != 0);
        for (s = 0; s < j; s++) {
            for (t = 0; t < j; t++) {
                if (num[t] == 2 * num[s])
                    answer++;
            }
        }
        cout << answer << endl;
    }
    return 0;
}

