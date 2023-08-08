//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        // create an array of count of characters
        int a[26]={0};
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            //lowercase
            int number = 0;
            number = ch-'a';
            a[number]++;
        }
        
        int maxi=-1,ans=0;
        for(int i=0;i<26;i++){
            if(maxi<a[i]){
                ans=i;
                maxi=a[i];
            }
        }
            return 'a'+ans;
    }


};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends