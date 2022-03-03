int main () {
    int days [13] = {0, 12, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int result [13] = {0};
    int sum = 0;
    int w;
    cin >> w;
    for (int k = 1;
    k != 13; k++) {
        sum += days[k];
        result[k] = (sum + w) % 7;
    }
    for (int k = 1;
    k != 13; k++)
        if (result[k] == 5)
            cout << k << endl;
    return 0;
}

