#include <bits/stdc++.h>

using namespace std;

// this solution is not valid and gives TLE but can be useful
// for learning purposes

// returns the distance between the upper bound and the lower bound
void querry(set<int> &flipped, int low, int high)
{
    // uper and lower bound return an iterator equivalent to a pointer
    set<int>::iterator lowbmin = flipped.lower_bound(low);
    set<int>::iterator lowbmax = flipped.upper_bound(high);
    int ans = distance(lowbmin, lowbmax);

    cout << ans << endl;
    ;
}

// void function that solves the problem
void solve()
{
    // read more about set at https://www.cplusplus.com/reference/set/set/
    set<int> flipped;
    // freopen to take the input from file
    // arguments : file path + "r" or "w" r for readin and w for writing stdin for input and stdout for output
    freopen("input.in", "r", stdin);
    int N, tmp;
    scanf("%d %d\n", &tmp, &N);
    string input;
    char Q;
    while (N--)
    {
        // using get line for you to learn more about it
        getline(cin, input);
        // using a string stream to porcess unkown number of elements in our case 2 or 3
        stringstream k(input);
        k >> input;
        if (input == "F")
        {
            k >> input;
            // stoi transforms a string to int
            tmp = stoi(input);
            // if the element is not in our set we added it
            if (flipped.find(tmp) == flipped.end())
                flipped.insert(tmp);
            // else we erase it
            else
                flipped.erase(tmp);
        }
        else
        {
            k >> input;
            int low = stoi(input);
            k >> input;
            int high = stoi(input);
            // calls the querry function
            querry(flipped, low, high);
        }
    }
}

int main()
{
    solve();
    return 0;
}