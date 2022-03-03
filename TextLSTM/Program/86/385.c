int main () {
    int n, badNum;
    int i, j;
    int badTotal, time, place, lastPlace;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> badNum;
        time = 0;
        badTotal = 0;
        lastPlace = 0;
        for (j = 1; j <= badNum; j++) {
            cin >> place;
            time += place - lastPlace;
            if (time < 60) {
                if (time <= 57) {
                    time += 3;
                    badTotal += 3;
                }
                else {
                    badTotal += 60 - time;
                    time += 3;
                }
            }
            else
                ;
            lastPlace = place;
        }
        cout << 60 - badTotal << endl;
    }
    return 0;
}

