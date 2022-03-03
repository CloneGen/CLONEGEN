int NumOfChoices (int, int, int);

int main () {
    int cases, apples, plates;
    cin >> cases;
    for (; cases >= 1; cases--) {
        cin >> apples >> plates;
        cout << NumOfChoices (apples, plates, 0) << endl;
    }
    return 0;
}

int NumOfChoices (int m, int n, int min) {
    int apples;
    int sum = 0;
    if (m == 0)
        return 0;
    if (n == 1) {
        if (m >= min)
            return 1;
        else
            return 0;
    }
    for (apples = min; apples <= m; apples++)
        sum += NumOfChoices (m - apples, n - 1, apples);
    return sum;
}

