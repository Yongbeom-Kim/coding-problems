#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;


class Solution {
public:
    string alienOrder(vector<string>& words) {
        unordered_set<char> all_letters;
        for (const string& word : words) {
            all_letters.insert(word.begin(), word.end());
        }
        
        unordered_map<char, int> in_degree;
        unordered_map<char, unordered_set<char>> graph;

        for (char letter : all_letters) {
            in_degree[letter] = 0;
            unordered_set<char> s;
            graph.emplace(letter, s);
        } 

        for (int word_idx = 0; word_idx < words.size()-1; word_idx ++) {
            string word = words[word_idx];
            string next_word = words[word_idx + 1];
            int letter_idx;
            bool is_same = true;
            for (int letter_idx = 0; letter_idx < min(word.size(), next_word.size()); letter_idx ++) {
                char letter = word[letter_idx];
                char next_letter = next_word[letter_idx];
                if (letter == next_letter) {
                    continue;
                }
                is_same = false;
                if (graph[letter].find(next_letter) != graph[letter].end()) {
                    break;
                }
                graph[letter].insert(next_letter);
                in_degree[next_letter] ++;
                break;
            }
            if (is_same && word.size() > next_word.size()) {
                return "";
            }
        }

        queue<char> q;
        string topological_ordering;

        for (const auto item : in_degree) {
            if (item.second == 0) {
                q.push(item.first);
            }
        }

        while (!q.empty()) {
            char letter = q.front();
            q.pop();
            topological_ordering.push_back(letter);
            for (char neighbour : graph[letter]) {
                in_degree[neighbour] --;
                if (in_degree[neighbour] == 0) {
                    q.push(neighbour);
                }
            }
        }

        for (const auto item : in_degree) {
            if (item.second != 0) {
                return "";
            }
        }

        return topological_ordering;
    }
};