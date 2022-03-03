int main () {
    int n [101] = {0};
    int nin;
    cin >> nin;
    int N;
    int num [nin], count = 0;
    for (int i = 1;
    i <= nin; ++i) {
        cin >> N;
        if (!n[N]) {
            num[count] = N;
            count++;
        }
        n[N]++;
    }
    for (int i = 0;
    i <= count - 2; ++i)
        cout << num[i] << ' ';
    cout << num[count - 1];
    return 0;
}

