int main (void) {
    int intime [1000], outtime, outtimemax = 0;
    int timeline [1000];
    int num = 0;
    int timenum = 0;
    char dot;
    for (int i = 0;
    i < 1000; i++)
        timeline[i] = 0;
    dot = 0;
    while (dot != 10) {
        cin >> intime[num];
        num++;
        dot = cin.get ();
    }
    for (int i = 0;
    i < num; i++) {
        cin >> outtime;
        outtimemax = outtime > outtimemax ? outtime : outtimemax;
        for (int j = intime[i];
        j < outtime; j++)
            timeline[j]++;
        cin.get ();
    }
    for (int i = 0;
    i < outtimemax; i++) {
        timenum = timeline[i] > timenum ? timeline[i] : timenum;
    }
    cout << num << ' ' << timenum;
    return 0;
}

