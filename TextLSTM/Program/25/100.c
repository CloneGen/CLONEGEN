int main () {
    int i, j, N, index = 0, temp, jinwei;
    int result [100];
    cin >> N;
    if (N == 0)
        cout << "1" << endl;
    else {
        result[0] = 2;
        for (i = 1; i < N; i++) {
            jinwei = 0;
            for (j = 0; j <= index; j++) {
                temp = 1;
                if (j == 0) {
                    temp = result[j] * 2;
                    if (temp >= 10)
                        jinwei = 1;
                }
                else {
                    temp = result[j] * 2;
                    if (jinwei == 1)
                        temp++;
                    if (temp >= 10)
                        jinwei = 1;
                    else
                        jinwei = 0;
                }
                result[j] = temp % 10;
            }
            if (jinwei == 1) {
                index++;
                result[index] = 1;
            }
        }
        for (i = index; i >= 0; i--)
            cout << result[i];
    }
    return 0;
}

