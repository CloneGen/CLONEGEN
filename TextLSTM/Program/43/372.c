int main () {
    int m, odd1, odd2;
    int devisor1, devisor2;
    int i, j;
    cin >> m;
    for (odd1 = 3; odd1 <= (m / 2); odd1 = odd1 + 2) {
        odd2 = m - odd1;
        i = 0;
        j = 0;
        for (devisor1 = 3; devisor1 < odd1; devisor1 = devisor1 + 2) {
            if (odd1 % devisor1 == 0) {
                i = i + 1;
                break;
            }
        }
        if (i == 0) {
            for (devisor2 = 3; devisor2 < odd2; devisor2 = devisor2 + 2) {
                if (odd2 % devisor2 == 0) {
                    j = j + 1;
                    break;
                }
            }
            if (j == 0)
                cout << odd1 << " " << odd2 << endl;
        }
    }
    return 0;
}

