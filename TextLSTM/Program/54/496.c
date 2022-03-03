int main (void) {
    int n, k, i;
    cin >> n >> k;
    int monkey [n + 1];
    monkey[n] = n + k;
    while (true) {
        for (i = n - 1; i > 0; i--) {
            if ((monkey[i + 1] % (n - 1)) != 0)
                break;
            monkey[i] = monkey[i + 1] * n / (n - 1) + k;
        }
        if (i == 0)
            break;
        monkey[n] += n;
    }
    cout << monkey[1] << endl;
    return 0;
}

