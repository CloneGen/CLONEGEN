int main () {
    int sushu (int);
    int num = 0;
    cin >> num;
    for (int i = 3;
    i <= num / 2; i = i + 2) {
        if (sushu (i) && sushu (num - i))
            cout << i << ' ' << num - i << endl;
    }
    return 0;
}

int sushu (int n1) {
    if (n1 == 2 || n1 == 3)
        return 1;
    for (int j = 2;
    j <= sqrt (n1); j++) {
        if (n1 % j == 0)
            return 0;
    }
    return 1;
}

