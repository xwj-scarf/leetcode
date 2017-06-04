class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        for(int i = 1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
                ans.push_back("FizzBuzz");
            else if (i%3==0)
                ans.push_back("Fizz");
            else if (i%5==0)
                ans.push_back("Buzz");
            else 
            {
                string t = "";
                int num = i;
                while(num)
                {
                    t+=(num%10)+'0';
                    num/=10;
                }
                reverse(t.begin(),t.end());
                ans.push_back(t);
            }
        }
        
        return ans;
    }
};
