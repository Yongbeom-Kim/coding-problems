#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int x,y,xdir=0,ydir=1,fx,fy;
int instructions[50];
int n;

void right() {
    swap(xdir, ydir);
    ydir = -ydir;
}

void left() {
    swap(xdir, ydir);
    xdir = -xdir;
}

void forward() {
    x += xdir;
    y += ydir;
}

void follow() {
    for (int i = 0; i < n; i ++) {
        if (instructions[i] == 0) forward();
        if (instructions[i] == 1) right();
        if (instructions[i] == -1) left();
    }
}


int main() {
    scanf("%d %d", &fx, &fy);
    scanf("%d", &n);
    for (int i = 0; i < n; i ++) {
        // 0 fwd 1 right -1 left
        string  s;
        cin >> s;
        instructions[i] = (s == "Forward" ? 0 : (s == "Right" ? 1 : -1));
    }

    
    for (int i = 0; i < n; i ++) {
        int init = instructions[i];
        instructions[i] = 0;x=0;y=0;
        follow();
        cout << x << "|"<< y << " " << i+1 << "Forward" << endl;
        if (x == fx && y == fy) {
            printf("%d %s", i+1, "Forward");
            return 0;
        }
        instructions[i] = 1;x=0;y=0;
        follow();
        cout << x << "|"<< y << " " << i+1 << "Right" << endl;
        if (x == fx && y == fy) {
            printf("%d %s", i+1, "Right");
            return 0;
        }
        instructions[i] = -1;x=0;y=0;
        follow();
        cout << x << "|"<< y << " " << i+1 << "Left" << endl;
        if (x == fx && y == fy) {
            printf("%d %s", i+1, "Left");
            return 0;
        }
        instructions[i] = init;
    }

}

