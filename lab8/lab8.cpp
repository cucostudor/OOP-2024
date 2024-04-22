#include <fstream>
#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <vector>

using namespace std;

class Compare {
public:
    bool operator()(const pair<string, int> a, const pair<string, int> b)
    {
        if (a.second != b.second) return a.second < b.second;
        else return a.first > b.first;
    }
};

string sep = ".!, ?";
int main()
{
    ifstream fin("fin.txt");

    string in;
    map<string, int> words;

    while (getline(fin, in)) {
        string strr;
        for (char ch : in) {
            if (sep.find(ch) == -1) strr += tolower(ch);
            else if (!strr.empty()) {
                words[strr]++;
                strr = "";
            }
        }
    }

    for (pair<string, int> cuv : words) {
        cout << cuv.first << ':' << cuv.second;
        cout << endl;
    }

    cout << endl;

    priority_queue<pair<string, int>, vector<pair<string, int>>, Compare> priorityqueue;

    for (pair<string, int> cuv : words) priorityqueue.push(cuv);

    while (!priorityqueue.empty()) {
        pair<string, int> top = priorityqueue.top();
        cout << top.first << ":" << top.second;
        cout << endl;
        priorityqueue.pop();
    }

    return 0;
}