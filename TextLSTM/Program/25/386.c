int main () {
    int power, output [34] = {1}, i, j, numEnd;
    cin >> power;
    for (i = 1; i <= power; i++) {
        for (j = 0; j < 34; j++)
            output[j] *= 2;
        for (j = 0; j < 34; j++)
            if (output[j] >= 10) {
                output[j] -= 10;
                output[j + 1]++;
            }
    }
    for (numEnd = 33; numEnd > 0; numEnd--)
        if (output[numEnd] == 0)
            ;
        else
            break;
    for (i = numEnd; i >= 0; i--)
        cout << output[i];
    cout << endl;
    return 0;
}

