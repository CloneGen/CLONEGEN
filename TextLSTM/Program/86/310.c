int TimeUsed = 0, Jumps = 0, Time = 0;

void Jump () {
    TimeUsed++;
    Jumps++;
}

void Fail () {
    TimeUsed += 3;
}

int main () {
    int kids, Failure, i, j, k;
    int FailTime [2] [60];
    cin >> kids;
    for (i = 0; i < kids; i++) {
        Jumps = 0;
        TimeUsed = 0;
        cin >> Failure;
        for (j = 0; j < Failure; j++) {
            cin >> FailTime[0][j];
            FailTime[1][j] = 0;
        }
        while (1) {
            Jump ();
            for (k = 0; k < Failure; k++) {
                if ((Jumps == FailTime[0][k]) && (FailTime[1][k] == 0)) {
                    FailTime[0][k] = 1;
                    Fail ();
                    break;
                }
            }
            if (TimeUsed >= 60)
                break;
        }
        cout << Jumps << endl;
    }
    return 0;
}

