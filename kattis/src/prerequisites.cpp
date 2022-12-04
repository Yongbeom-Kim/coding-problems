#include <cstdio>
#include <algorithm>
int main() {
    while (true) {
        int n_courses, n_categories;
        scanf("%d", &n_courses);
        if (n_courses == 0) {
            return 0;
        } 

        scanf("%d\n", &n_categories);
        int courses[100];
        for(int i = 0; i < n_courses; i ++) {
            scanf("%d", courses+i);
        }

        bool fail = false;
        for (int i = 0; i < n_categories; i ++) {
            int n, req;
            scanf("%d %d", &n, &req);

            for (int j = 0; j < n; j ++) {
                int crs;
                scanf("%d", &crs);
                if (std::find(courses, courses+n_courses, crs) != courses+n_courses) {
                    req -= 1;
                }
            }
            if (!fail && req > 0) {
                printf("no\n");
                fail = true;
            }
        }
        if (!fail) {
            printf("yes\n");
        }
    }


}