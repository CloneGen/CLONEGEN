int main () {
    int n, k, i;
    cin >> n >> k;
    const  int num = n + 1;
    int apple [num];
    apple[n] = n + k;
    while (true) {
        for (i = n - 1; i > 0; i--) {
            if (apple[i + 1] % (n - 1) != 0)
                break;
            apple[i] = apple[i + 1] * n / (n - 1) + k;
            if (apple[i] % n != k)
                break;
        }
        if (i == 0)
            break;
        apple[n] += n;
    }
    cout << apple[1] << endl;
    return 0;
}

