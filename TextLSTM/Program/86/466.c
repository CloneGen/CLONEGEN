int main () {
    int n;
    cin >> n;
    const  int kMaxSeconds = 60;
    for (int i = 0;
    i < n; ++i) {
        int interuptCount;
        int interuptNum;
        cin >> interuptCount;
        int lostNum = 0;
        for (int j = 0;
        j < interuptCount; ++j) {
            cin >> interuptNum;
            int sec = interuptNum + lostNum;
            if (sec < kMaxSeconds)
                if ((kMaxSeconds - sec) > 3)
                    lostNum += 3;
                else
                    lostNum += kMaxSeconds - sec;
        }
        cout << kMaxSeconds - lostNum << endl;
    }
    return 0;
}

