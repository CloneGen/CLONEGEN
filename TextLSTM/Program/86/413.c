int main () {
    int n;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        int count [20], fail, j, sum = 0;
        cin >> fail;
        if (fail == 0)
            sum = 60;
        else {
            for (j = 1; j <= fail; j++)
                cin >> count[j];
            for (j = 1; j <= fail; j++) {
                if (count[j] + j * 3 >= 60) {
                    if (count[j] + (j - 1) * 3 < 60) {
                        sum = count[j];
                        break;
                    }
                    else {
                        sum = 60 - (j - 1) * 3;
                        break;
                    }
                }
                else
                    sum = 60 - j * 3;
            }
        }
        cout << sum << endl;
    }
    return 0;
}

