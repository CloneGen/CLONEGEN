int main () {
    int n, k, apple = 1, i = 1, monkey = 1;
    cin >> n >> k;
    while (true) {
        if (apple * n % (n - 1) != 0) {
            i++;
            monkey = 1;
            apple = i;
            continue;
        }
        apple = apple * n / (n - 1) + k;
        if (monkey == n) {
            cout << apple;
            return 0;
        }
        monkey++;
    }
    return 0;
}

