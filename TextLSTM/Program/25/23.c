int main () {
    char number [50] = {2};
    int i, j, N;
    cin >> N;
    if (N == 0) {
        cout << 1;
        return 0;
    }
    for (i = 0; i < N -1; i++) {
        for (j = 0; j < 50; j++)
            number[j] *= 2;
        for (j = 0; j < 50; j++) {
            number[j + 1] += number[j] / 10;
            number[j] -= number[j] / 10 * 10;
        }
    }
    for (j = 49; j >= 0; j--) {
        if (number[j] != 0)
            break;
    }
    for (i = j; i >= 0; i--)
        printf ("%d", number[i]);
    return 0;
}

