#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find the next greater element for each element of the array.
    void nextLargerElement(vector<long long> arr, int n)
    {
        stack<int> st;
        vector<int> v;
        for (int i = n - 1; i >= 0; i--)
        {

            if (st.empty() )
            {

                v.push_back(-1);
                st.push(arr[i]);
            }
            else if (st.top() > arr[i])
            {
                v.push_back(st.top());
                st.push(arr[i]);
            }
            else if (st.top() < arr[i])
            {
                while (st.top() < arr[i])
                {
                    st.pop();
                }
                if (!st.empty())
                {
                    v.push_back(st.top());
                    st.push(arr[i]);
                }
                else if(st.empty()){
                    v.push_back(-1);
                    st.push(arr[i]);
                }
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << v[i] << " ";
        }
    }
};
int main()
{

    //     12
    // 4 12 5 3 1 2 5 3 1 2 4 6

    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution obj;
    obj.nextLargerElement(arr, n);

    return 0;
}