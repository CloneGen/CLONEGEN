int main () {
    int N, i, j = 0, k, x;
    int inum [510] = {0}, numb [255] = {0};
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> inum[i];
    for (i = 0; i < N; i++)
        if (inum[i] % 2 != 0) {
            numb[j] = inum[i];
            j = j + 1;
        }
    for (i = 0; i < j - 1; i++)
        for (k = 0; k < j - 1 - i; k++)
            if (numb[k] > numb[k + 1]) {
                x = numb[k];
                numb[k] = numb[k + 1];
                numb[k + 1] = x;
            }
    cout << numb[0];
    for (i = 1; i < j; i++)
        cout << "," << numb[i];
    return 0;
}

