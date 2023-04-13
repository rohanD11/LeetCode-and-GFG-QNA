class Solution
{
public:
    bool validateStackSequences(vector<int> &push, vector<int> &pop)
    {
        stack<int> stack;
        int j = 0;
        for (int x : push)
        {
            stack.push(x);
            while (stack.size() && stack.top() == pop[j])
            {
                stack.pop();
                j++;
            }
        }
        return stack.size() == 0;
    }
};
