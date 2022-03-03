int max_yueshu (int a, int b) {
    if (b == 0)
        return a;
    else
        return max_yueshu (b, a % b);
}

int main () {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1;
    i <= n; ++i)
        if (i % 7 != 0 && i % 10 != 7 && i / 10 != 7)
            sum += i * i;
    cout << sum << endl;
    return 0;
}

