int main () {
    const  int MAX_LENTH = 250;
    unsigned an1 [MAX_LENTH], an2 [MAX_LENTH];
    char seLine1 [MAX_LENTH +1], seLine2 [MAX_LENTH +1];
    cin.getline (seLine1, MAX_LENTH +1);
    cin.getline (seLine2, MAX_LENTH +1);
    int len1 = strlen (seLine1), len2 = strlen (seLine2);
    memset (an1, 0, sizeof (an1));
    memset (an2, 0, sizeof (an2));
    int i, j = 0;
    for (i = len1 - 1; i >= 0; i--) {
        an1[j++] = seLine1[i] - '0';
    }
    j = 0;
    for (i = len2 - 1; i >= 0; i--) {
        an2[j++] = seLine2[i] - '0';
    }
    for (i = 0; i < MAX_LENTH; i++) {
        an1[i] += an2[i];
        if (an1[i] >= 10) {
            an1[i] -= 10;
            an1[i + 1]++;
        }
    }
    i = MAX_LENTH -1;
    while (an1[i] == 0) {
        i--;
    }
    if (i < 0) {
        cout << 0;
    }
    else {
        for (; i >= 0; i--) {
            cout << an1[i];
        }
    }
    cout << endl;
    return 0;
}

