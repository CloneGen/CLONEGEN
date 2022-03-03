int Compare (char string1 [], char string2 [], int N) {
    int flag = 0, i = 0, j = 0;
    for (i = 0; i < N; i++) {
        if (string1[i] == string2[i])
            flag = 0;
        else if (string1[i] != string2[i]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return 0;
    else if (flag == 1)
        return 1;
}

int main () {
    char string [600], List [600] [600];
    int Frequency [600];
    int i = 0, j = 0, m = 0, k = 0, N = 0, t = 0, length = 0, Max = 0;
    cin >> N;
    gets (string);
    gets (string);
    length = strlen (string);
    i = 0, j = 0, k = 0;
    while (length >= N) {
        for (i = 0; i < N; i++) {
            List[k][i] = string[k + i];
        }
        k++;
        i = 0;
        length = length - 1;
    }
    for (i = 0; i < k; i++) {
        Frequency[i] = 1;
    }
    for (i = 0; i < k; i++) {
        if (Frequency[i] == 0)
            continue;
        for (j = i + 1; j < k; j++) {
            if (Compare (List[i], List[j], N) == 0) {
                Frequency[j] = 0;
                Frequency[i]++;
            }
        }
    }
    for (i = 0; i < k; i++) {
        if (Frequency[i] >= Max)
            Max = Frequency[i];
    }
    if (Max == 1)
        cout << "NO" << endl;
    else if (Max > 1) {
        cout << Max << endl;
        for (i = 0; i < k; i++) {
            if (Frequency[i] == Max) {
                for (j = 0; j < N; j++) {
                    cout << List[i][j];
                }
                cout << endl;
            }
        }
    }
    return 0;
}

