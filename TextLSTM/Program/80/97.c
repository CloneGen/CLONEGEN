int main () {
    int num [3], nul [3];
    int i, j, h = 0, k = 0, sum = 0;
    for (i = 0; i < 3; i++) {
        cin >> num[i];
    }
    for (i = 0; i < 3; i++) {
        cin >> nul[i];
    }
    if (nul[1] <= 2) {
        for (i = num[0]; i < nul[0]; i++) {
            if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
                sum = sum + 366;
            else
                sum = sum + 365;
        }
    }
    if (nul[1] > 2) {
        for (i = num[0] + 1; i < (nul[0] + 1); i++) {
            if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
                sum = sum + 366;
            else
                sum = sum + 365;
        }
    }
    if (((num[0] % 4 == 0) && (num[0] % 100 != 0)) || (num[0] % 400 == 0)) {
        if (num[1] == 1)
            h = num[2];
        if (num[1] == 2)
            h = num[2] + 31;
        if (num[1] == 3)
            h = num[2] + 60;
        if (num[1] == 4)
            h = num[2] + 91;
        if (num[1] == 5)
            h = num[2] + 121;
        if (num[1] == 6)
            h = num[2] + 152;
        if (num[1] == 7)
            h = num[2] + 182;
        if (num[1] == 8)
            h = num[2] + 213;
        if (num[1] == 9)
            h = num[2] + 244;
        if (num[1] == 10)
            h = num[2] + 274;
        if (num[1] == 11)
            h = num[2] + 305;
        if (num[1] == 12)
            h = num[2] + 335;
    }
    else {
        if (num[1] == 1)
            h = num[2];
        if (num[1] == 2)
            h = num[2] + 31;
        if (num[1] == 3)
            h = num[2] + 59;
        if (num[1] == 4)
            h = num[2] + 90;
        if (num[1] == 5)
            h = num[2] + 120;
        if (num[1] == 6)
            h = num[2] + 151;
        if (num[1] == 7)
            h = num[2] + 181;
        if (num[1] == 8)
            h = num[2] + 212;
        if (num[1] == 9)
            h = num[2] + 243;
        if (num[1] == 10)
            h = num[2] + 273;
        if (num[1] == 11)
            h = num[2] + 304;
        if (num[1] == 12)
            h = num[2] + 334;
    }
    if (((num[0] % 4 == 0) && (num[0] % 100 != 0)) || (num[0] % 400 == 0)) {
        if (nul[1] == 1)
            k = nul[2];
        if (nul[1] == 2)
            k = nul[2] + 31;
        if (nul[1] == 3)
            k = nul[2] + 60;
        if (nul[1] == 4)
            k = nul[2] + 91;
        if (nul[1] == 5)
            k = nul[2] + 121;
        if (nul[1] == 6)
            k = nul[2] + 152;
        if (nul[1] == 7)
            k = nul[2] + 182;
        if (nul[1] == 8)
            k = nul[2] + 213;
        if (nul[1] == 9)
            k = nul[2] + 244;
        if (nul[1] == 10)
            k = nul[2] + 274;
        if (nul[1] == 11)
            k = nul[2] + 305;
        if (nul[1] == 12)
            k = nul[2] + 335;
    }
    else {
        if (nul[1] == 1)
            k = nul[2];
        if (nul[1] == 2)
            k = nul[2] + 31;
        if (nul[1] == 3)
            k = nul[2] + 59;
        if (nul[1] == 4)
            k = nul[2] + 90;
        if (nul[1] == 5)
            k = nul[2] + 120;
        if (nul[1] == 6)
            k = nul[2] + 151;
        if (nul[1] == 7)
            k = nul[2] + 181;
        if (nul[1] == 8)
            k = nul[2] + 212;
        if (nul[1] == 9)
            k = nul[2] + 243;
        if (nul[1] == 10)
            k = nul[2] + 273;
        if (nul[1] == 11)
            k = nul[2] + 304;
        if (nul[1] == 12)
            k = nul[2] + 334;
    }
    cout << sum + k - h;
    return 0;
}

