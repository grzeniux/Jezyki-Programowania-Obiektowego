
#include <iostream>
#include <string>
#include <random>
#include <vector>
#include <queue>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int n{};
    cout << "insert number of integers: ";
    cin >> n;
    std::queue <string> que;
    que.push("1");
    for (int i = 0; i < n; i++) {
        string front = que.front();
        que.pop();
        cout <<front<< '\n';
        que.push(front + "0");
        que.push(front + "1");
    }
}

