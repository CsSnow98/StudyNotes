#include <bits/stdc++.h>

using namespace std;

float distance(float x, float y)
{
    return sqrt(pow(x, 2) + pow(y, 2));
}

pair<float, int> next(int index, vector<bool>& sign, vector<pair<int, int>>& map)
{ 
    sign[index] = true;
    float min = INT32_MAX;
    int min_index = 5;
    for (int i = 0; i < 5; i++)
    {
        if (sign[i] == false)
        {
            if (distance((map[index].first - map[i].first), (map[index].second - map[i].second)) < min)
            {
                min = distance((map[index].first - map[i].first), (map[index].second - map[i].second));
                min_index = i;
            }
        }
    }
    return {min, min_index};
}
int main()
{   
    vector<pair<int, int>> map;
    float min = INT32_MAX;
    int min_index = 5;
    for (int i = 0; i < 5; i++)
    {
        int x, y;
        cin >> x >> y;
        map.push_back({x, y});
        if (distance(x, y) < min)
        {
            min = distance(x, y);
            min_index = i;
        }
    }
    vector<bool> sign(5, false);
    float res = min;
    for (int i = 0; i < 4; i++)
    {
        pair<float, int> p = next(min_index, sign, map);
        res += p.first;
        min_index = p.second;
    }
    res += distance(map[min_index].first, map[min_index].second);
    printf("%.f", res);
    return 0;
}