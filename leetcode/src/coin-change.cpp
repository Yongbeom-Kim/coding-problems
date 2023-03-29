/*
Top-Down DP
*/
#include <climits>
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        int coins_needed[10010];
        bool visited[10010];
        fill(coins_needed, coins_needed+amount+3, SHRT_MAX);
        fill(visited, visited+amount+3, false);
        coins_needed[0] = 0;
        visited[0] = true;

        auto helper = [&coins, &coins_needed, &visited](int curr_amt, auto& helper_ref) -> int {
            if (visited[curr_amt])
                return coins_needed[curr_amt];
            
            for (auto coin: coins) {
                if (curr_amt >= coin)
                    coins_needed[curr_amt] 
                            = min(coins_needed[curr_amt], helper_ref(curr_amt - coin, helper_ref)+1);
            }

            visited[curr_amt] = true;
            return coins_needed[curr_amt];

        };

        int result = helper(amount, helper);
        return result == SHRT_MAX ? -1 : result;
    }
};

/*
BOTTOM-UP DP
*/
#include <climits>
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int coins_needed[10010];
        fill(coins_needed, coins_needed+amount+1, INT_MAX);
        coins_needed[0] = 0;

        for (int i = 1; i <= amount; i ++) {
            for (auto coin: coins)
                if (i >= coin && coins_needed[i-coin] != INT_MAX)
                    coins_needed[i] = min(coins_needed[i], coins_needed[i-coin]+1);
        }


        return coins_needed[amount] == INT_MAX ? -1 : coins_needed[amount];
    }
};

