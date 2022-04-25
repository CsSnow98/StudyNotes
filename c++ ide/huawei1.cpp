#include <bits/stdc++.h>

using namespace std;

int res = 0; 
int score = 0;



void backtracing(vector<int>& arr, int fal, int target, int idx)
{   
    if (fal > 3 || idx > 25) 
    {
        return;
    }
    if (fal == 3 || idx == 25) 
    {
        if (score == target) res++;
        return;
    }
    if (score == target)
    {  
        res++;
        return;
    }
    for (int i = 0; i < 2; i++)
    {
        if (i == 1) 
        {
            backtracing(arr, fal + 1, target, idx + 1);
        }
        else 
        {
            score += arr[idx];
            backtracing(arr, fal, target, idx + 1);
            score -= arr[idx];
        }
    }
}

int main()
{
    int target;
    cin >> target;
    vector<int> arr = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 8, 8, 8, 8, 8};
    backtracing(arr, 0, target, 0);
    cout << res;
    return 0;
}