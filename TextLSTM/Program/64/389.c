int main () {
    int n;
    cin >> n;
    struct  zb {
        int x;
        int y;
        int z;
    }
    dian [n];
    for (int i = 0;
    i < n; i++)
        cin >> dian[i].x >> dian[i].y >> dian[i].z;
    double distance [n] [n];
    for (int i = 0;
    i < n; i++)
        for (int j = 0;
        j < n; j++)
            distance[i][j] = 0.0;
    for (int i = 0;
    i < n - 1; i++)
        for (int j = i + 1;
        j < n; j++)
            distance[i][j] = (sqrt) ((dian[i].x - dian[j].x) * (dian[i].x - dian[j].x) + (dian[i].y - dian[j].y) * (dian[i].y - dian[j].y) + (dian[i].z - dian[j].z) * (dian[i].z - dian[j].z));
    int amount = n * (n - 1) / 2;
    for (int i = 0;
    i < amount; i++) {
        double maxdis = 0;
        int maxX = 0, maxY = 0;
        for (int j = 0;
        j < n - 1; j++) {
            for (int k = j + 1;
            k < n; k++) {
                if (maxdis < distance[j][k]) {
                    maxdis = distance[j][k];
                    maxX = j;
                    maxY = k;
                }
            }
        }
        cout << "(" << dian[maxX].x << "," << dian[maxX].y << "," << dian[maxX].z << ")" << "-" << "(" << dian[maxY].x << "," << dian[maxY].y << "," << dian[maxY].z << ")" << "=";
        cout << fixed << setprecision (2) << maxdis << endl;
        distance[maxX][maxY] = 0.0;
    }
    return 0;
}

