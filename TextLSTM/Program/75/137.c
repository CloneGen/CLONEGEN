int main () {
    char come1 [10000], leave1 [10000];
    int come2 [10000], leave2 [10000], num [1001], comma1 [10000], comma2 [100000], count = 0, max = 0, i, j, all;
    memset (come2, 0, sizeof (come2));
    memset (leave2, 0, sizeof (leave2));
    memset (comma1, 0, sizeof (comma1));
    memset (comma2, 0, sizeof (comma2));
    memset (num, 0, sizeof (num));
    cin.getline (come1, 10000);
    cin.getline (leave1, 10000);
    for (i = 0; come1[i] != '\0'; i++) {
        if (come1[i] == ',') {
            comma1[count] = i;
            count++;
        }
    }
    all = count + 1;
    for (j = 0; j < comma1[0]; j++)
        come2[0] = come2[0] * 10 + (come1[j] - '0');
    for (i = 1; i < count; i++)
        for (j = comma1[i - 1] + 1; j < comma1[i]; j++)
            come2[i] = come2[i] * 10 + (come1[j] - '0');
    for (j = comma1[count - 1] + 1; come1[j] != '\0'; j++)
        come2[count] = come2[count] * 10 + (come1[j] - '0');
    count = 0;
    for (i = 0; leave1[i] != '\0'; i++) {
        if (leave1[i] == ',') {
            comma2[count] = i;
            count++;
        }
    }
    for (j = 0; j < comma2[0]; j++)
        leave2[0] = leave2[0] * 10 + (leave1[j] - '0');
    for (i = 1; i < count; i++)
        for (j = comma2[i - 1] + 1; j < comma2[i]; j++)
            leave2[i] = leave2[i] * 10 + (leave1[j] - '0');
    for (j = comma2[count - 1] + 1; leave1[j] != '\0'; j++)
        leave2[count] = leave2[count] * 10 + (leave1[j] - '0');
    for (i = 0; i < all; i++)
        for (j = come2[i]; j < leave2[i]; j++)
            num[j] = num[j] + 1;
    for (i = 0; i < 1001; i++) {
        if (max < num[i])
            max = num[i];
    }
    cout << all << " " << max << endl;
    return 0;
}

