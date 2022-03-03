int main () {
    int product [33] = {0}, i, j, n;
    cin >> n;
    product[0] = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 33; j++) {
            product[j] *= 2;
        }
        for (j = 0; j < 33; j++) {
            if (product[j] >= 10) {
                product[j] -= 10;
                product[j + 1] += 1;
            }
        }
    }
    for (i = 32; i >= 0; i--)
        if (product[i] != 0)
            break;
    for (; i >= 0; i--) {
        cout << product[i];
    }
    return 0;
}

