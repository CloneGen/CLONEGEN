int main () {
    int itime [10000], otime [10000], sum [1000];
    int count = 0, i = 0, j = 0, max = 0;
    char temp;
    memset (sum, 0, sizeof (sum));
    while (1) {
        cin >> itime[count];
        cin.get (temp);
        if (temp != '\n')
            count++;
        else {
            count++;
            break;
        }
    }
    count = 0;
    while (1) {
        cin >> otime[count];
        cin.get (temp);
        if (temp != '\n')
            count++;
        else {
            count++;
            break;
        }
    }
    for (i = 0; i < count; i++) {
        for (j = itime[i]; j < otime[i]; j++)
            sum[j]++;
    }
    for (i = 0; i < 1000; i++) {
        if (sum[i] > max)
            max = sum[i];
    }
    cout << count << " " << max << endl;
    return 0;
}

