// https://leetcode.com/problems/palindrome-pairs/description/
// O(kn^2) solution

#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> getPrefixes(const string& word) {
        vector<string> result;
        for (int i = word.size()-1; i >= 0; i --) {

            int lo = i, hi = word.size()-1;
            bool isPalindrome = true;
            while (lo < hi) {
                if (word[lo] != word[hi]) {
                    isPalindrome = false;
                    break;
                }
                lo ++; hi --;
            }

            if (isPalindrome) {
                result.push_back(word.substr(0,i));
            }

        }

        return result;
    }

    vector<string> getSuffixes(const string& word) {
        vector<string> result;

        for (int i = 1; i <= word.size(); i ++) {
            int lo = 0, hi = i-1;
            bool isPalindrome = true;
            while (lo < hi) {
                if (word[lo] != word[hi]) {
                    isPalindrome = false;
                    break;
                }
                lo ++; hi --;
            }
            if (isPalindrome) {
                result.push_back(word.substr(i, word.size()));
            }
        }

        return result;
    }

    vector<vector<int>> palindromePairs(vector<string>& words) {
        vector<vector<int>> result;

        unordered_map<string, int> reverse_mapping;
        for (int i = 0; i < words.size(); i ++) {
            reverse_mapping[words[i]] = i;
        }

        for (int i = 0; i < words.size(); i ++) {
            const string& word = words[i];
            string reversed_word (word.rbegin(), word.rend());
            if (reverse_mapping.find(reversed_word) != reverse_mapping.end() && reverse_mapping[reversed_word] != i) {
                result.push_back({i, reverse_mapping[reversed_word]});
            }

            for (const string& prefix : getPrefixes(word)) {
                string reversed_word (prefix.rbegin(), prefix.rend());
                if (reverse_mapping.find(reversed_word) != reverse_mapping.end() && reverse_mapping[reversed_word] != i) {
                    result.push_back({i, reverse_mapping[reversed_word]});
                }
            }

            for (const string& suffix: getSuffixes(word)) {
                string reversed_word (suffix.rbegin(), suffix.rend());
                if (reverse_mapping.find(reversed_word) != reverse_mapping.end() && reverse_mapping[reversed_word] != i) {
                    result.push_back({reverse_mapping[reversed_word],i});
                }
            }
        }


        


        return result;
    }
};