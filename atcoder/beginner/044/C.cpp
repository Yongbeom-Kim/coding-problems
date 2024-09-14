/*
O(N^3 max(cards)) time complexity

top-down dp
*/

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// ll soln(int N, int A, vector<int>& cards) {
//     int max_card = *max_element(cards.begin(), cards.end());
//     ll max_sum = max(A, max_card)*N;

//     // memo[j][k][s] = ways from first j cards, choose k cards to get sum s
//     vector<vector<vector<ll>>> memo (N + 1, vector<vector<ll>>(N + 1, vector<ll>(max_sum + 1, -1)));


//     auto dp = [&](int j, int k, int s, auto& dp_ref) -> ll {
//         if (k == 0 && s == 0) {
//             return 1;
//         }
//         if (j == 0 || k == 0 || s < 0) {
//             return 0;
//         }
//         if (memo[j][k][s] != -1) {
//             return memo[j][k][s];
//         }

//         memo[j][k][s] = dp_ref(j-1, k, s, dp_ref);
//         if (s-cards[j-1] >= 0) {
//             memo[j][k][s] += dp_ref(j-1, k-1, s-cards[j-1], dp_ref);
//         }
//         return memo[j][k][s];
//     };

//     ll ans = 0;
//     for (int i = 1; i <= N; i ++) {
//         ans += dp(N, i, A*i, dp);
//     }
//     return ans;
// }

// int main() {
//     int N, A;
//     scanf ("%d %d", &N, &A);

//     vector<int> cards (N, 0);
//     for (int i = 0; i < N; i ++) {
//         scanf("%d", &cards[i]);
//     }

//     printf("%lld", soln(N, A, cards));
// }


/*
O(N^3 max(cards)) time complexity

bottom-up dp
*/
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// ll soln(int N, int A, vector<int>& cards) {
//     int max_card = *max_element(cards.begin(), cards.end());
//     int max_sum = N*max(A, max_card);
//     // dp[j][k][s] = ways from first j cards, to choose k cards to get sum s
//     vector<vector<vector<ll>>> dp
//         (N+1, vector<vector<ll>> (N+1, vector<ll> (max_sum+1, 0)));

//     for (int j = 0; j <= N; j++) {
//         dp[j][0][0] = 1;
//     }
    
//     for (int j = 1; j < N+1; j ++) {
//         for (int k = 1; k < N+1; k ++) {
//             for (int s = 1; s < max_sum + 1; s ++) {
//                 dp[j][k][s] = dp[j-1][k][s];
//                 if (s - cards[j-1] >= 0) {
//                     dp[j][k][s] += dp[j-1][k-1][s - cards[j-1]];
//                 }
//             }
//         }
//     }

//     ll total = 0;
//     for (int k = 1; k < N+1; k ++) {
//         total += dp[N][k][A*k];
//     }
//     return total;
    
// }

// int main() {
//     int A, N;
//     scanf("%d", &N);
//     scanf("%d", &A);

//     vector<int> cards(N);
//     for (int i = 0; i < N; i ++) {
//         scanf("%d", &cards[i]);
//     }

//     printf("%lld", soln(N, A, cards));
// }

/*
O(N^2 max(cards)) time complexity
top down dp
*/

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// ll soln(int N, int A, vector<int>& cards) {
//     int max_card = *max_element(cards.begin(), cards.end());
//     int max_sum = N*max(A, max_card);
//     vector<int> cards_minus_a (N);
//     for (int i = 0; i < N; i ++) {
//         cards_minus_a[i] = cards[i] - A;
//     }

//     // memo[j][s] = ways to choose cards from first j cards to get sum (s - max_sum)
//     vector<vector<ll>> memo (N+1, vector<ll> (2*(max_sum+1), -1));

//     auto dp = [&](int j, int s, auto& dp_ref) -> ll {
//         if (j == 0 && s == max_sum) {
//             return 1;
//         }
//         if (j == 0) {
//             return 0;
//         }
//         if (memo[j][s] != -1) {
//             return memo[j][s];
//         }
//         memo[j][s] = dp_ref(j-1, s, dp_ref);
//         if (s-cards_minus_a[j-1] >= 0) {
//             memo[j][s] += dp_ref(j-1, s-cards_minus_a[j-1], dp_ref);
//         }
//         return memo[j][s];
//     };

//     return dp(N, 0 + max_sum, dp) - 1;
// }

// int main() {
//     int A, N;
//     scanf("%d", &N);
//     scanf("%d", &A);

//     vector<int> cards(N);
//     for (int i = 0; i < N; i ++) {
//         scanf("%d", &cards[i]);
//     }

//     printf("%lld", soln(N, A, cards));
// }




/*
O(N^2 max(cards)) time complexity
bottom up dp
*/

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// ll soln(int N, int A, vector<int>& cards) {
//     int max_card = *max_element(cards.begin(), cards.end());
//     int max_sum = N*max(A, max_card);
//     vector<int> cards_minus_a (N);
//     for (int i = 0; i < N; i ++) {
//         cards_minus_a[i] = cards[i] - A;
//     }

//     // dp[j][s] = ways by choosing cards from first j cards to get sum (s-max_sum)
//     vector<vector<ll>> dp (N+1, vector<ll> (2*(max_sum+1), 0));
//     for (int j = 0; j < N+1; j ++) {
//         dp[j][max_sum] = 1;
//     }


//     for (int j = 1; j < N+1; j ++) {
//         for (int s = 0; s < 2*(max_sum+1); s ++) {
//             dp[j][s] = dp[j-1][s];
//             if (s - cards_minus_a[j-1] >= 0 && s - cards_minus_a[j-1] < 2*(max_sum+1)) {
//                 dp[j][s] += dp[j-1][s - cards_minus_a[j-1]];
//             }
//         }
//     }

//     return dp[N][max_sum] - 1;
// }

// int main() {
//     int A, N;
//     scanf("%d", &N);
//     scanf("%d", &A);

//     vector<int> cards(N);
//     for (int i = 0; i < N; i ++) {
//         scanf("%d", &cards[i]);
//     }

//     printf("%lld", soln(N, A, cards));
// }