int classify (int M, int N) {
    if (M == 1 || M == 0 || N == 1)
        return 1;
    else if (M < 0)
        return 0;
    else
        return classify (M, N -1) + classify (M -N, N);
}

int main () {
    int t, i = 0, M, N;
    cin >> t;
    int p [t];
    while (i < t) {
        cin >> M >> N;
        p[i] = classify (M, N);
        i++;
    }
    for (i = 0; i < t; i++)
        cout << p[i] << endl;
    return 0;
}

