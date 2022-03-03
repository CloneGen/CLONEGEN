void cin_ (int *p) {
    char cin_temp [10000] = {0};
    cin.getline (cin_temp, 10000, '\n');
    int i;
    for (i = 0; cin_temp[i] != 0;) {
        int j;
        for (j = 1; cin_temp[i + j] != ',' && cin_temp[i + j] != 0; j++)
            ;
        int temp = 0;
        for (int k = 1;
        k <= j; k++) {
            temp = temp + (cin_temp[i + k - 1] - '0') * (int) pow (10.0, (double) (j - k));
        }
        *p = temp;
        p++;
        i = i + j + 1;
    }
}

int main () {
    int in [10000], out [10000];
    for (int h = 0;
    h < 10000; h++) {
        in[h] = out[h] = -1;
    }
    cin_ (in);
    cin_ (out);
    int num;
    for (num = 0;; num++)
        if (in[num] == -1)
            break;
    int time [1001] = {0};
    int i, j;
    for (i = 0; i < num; i++) {
        for (j = in[i]; j < out[i]; j++)
            time[j]++;
    }
    int max = 0;
    for (j = 0; j < 1001; j++) {
        if (time[j] > max)
            max = time[j];
    }
    cout << num << " " << max;
    return 0;
}

