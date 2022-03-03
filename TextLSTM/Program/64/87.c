struct  position {
    double distance [1000];
    int x;
    int y;
    int z;
}
pos [1000];
struct  str {
    int point1;
    int point2;
    double distance;
}
length [100], temp;

int main () {
    int n, i, j, k, num;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> pos[i].x >> pos[i].y >> pos[i].z;
    }
    num = 0;
    for (i = 1; i <= n; i++) {
        k = 0;
        for (j = i + 1; j <= n; j++) {
            k++;
            num++;
            pos[i].distance[k] = (pos[i].x - pos[j].x) * (pos[i].x - pos[j].x) + (pos[i].y - pos[j].y) * (pos[i].y - pos[j].y) + (pos[i].z - pos[j].z) * (pos[i].z - pos[j].z);
            length[num].point1 = i;
            length[num].point2 = j;
            length[num].distance = pos[i].distance[k];
        }
    }
    for (i = 1; i < num; i++)
        for (j = 1; j <= num - i; j++) {
            if (length[j].distance < length[j + 1].distance) {
                temp = length[j];
                length[j] = length[j + 1];
                length[j + 1] = temp;
            }
        }
    for (i = 1; i <= num; i++) {
        cout << "(" << pos[length[i].point1].x << "," << pos[length[i].point1].y << "," << pos[length[i].point1].z << ")" << "-" << "(" << pos[length[i].point2].x << "," << pos[length[i].point2].y << "," << pos[length[i].point2].z << ")" << "=" << fixed << setprecision (2) << sqrt (length[i].distance) << endl;
    }
    return 0;
}

