int main () {
    int n, sum = 0;
    cin >> n;
    for (int i = 1;
    i <= n; i++)
        if (i % 7)
            if (i / 100 != 7)
                if ((i / 10) % 10 != 7)
                    if (i % 10 != 7)
                        sum += i * i;
    cout << sum;
    return 0;
}

