int main () {
    int N, M, Lose, i, j;
    int Times [101], Bad [101];
    cin >> N;
    for (i = 1; i <= N; i++) {
        Lose = 0;
        cin >> M;
        for (j = 1; j <= M; j++) {
            cin >> Times[j];
            if (Lose == 0) {
                if ((Times[j] + j * 3) >= 60) {
                    if ((Times[j] + 3 * (j - 1) >= 60))
                        Bad[i] = 60 - 3 * (j - 1);
                    else
                        Bad[i] = Times[j];
                    Lose = 1;
                }
            }
        }
        if (M == 0)
            Bad[i] = 60;
        else if ((Times[M] + 3 * M) <= 60)
            Bad[i] = 60 - 3 * M;
    }
    for (i = 1; i <= N; i++) {
        cout << Bad[i];
        if (i != N)
            cout << endl;
    }
    return 0;
}

