**VIDEO EXPLANATION :-**
<iframe width="560" height="315" src="https://www.youtube.com/embed/sGnZbcoKigc" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

**THE CODE :-**
```
class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        int m=S.size();
        vector<string>ans; //Declared a vector to store all the permutations 
        ans.push_back(""); // Pushed an empty string in it .
        for(int i=0;i<m;i++){  //Now iterater through all the elements of the given String.
            if(isalpha(S[i])){     //If the current element is an alphabet, then for each element present in our vector, we will concatenate it with lower case of current element and also make a new string concanated with upper case of current element.
                int n=ans.size();
                for(int j=0;j<n;j++){
                    string temp1,temp2;
                    temp1= tolower(S[i]);
                    temp2= toupper(S[i]);
                    ans.push_back(ans[j]+temp1);
                    ans[j]=ans[j]+temp2;
                }
            }
            else{ //if the current elment is a digit,we will concaterate this digit to all the strings present in our vector.
                int n=ans.size();
                for(int j=0;j<n;j++){
                    ans[j]=ans[j]+S[i];
                }
            }
        }
        return ans;
    }
};
```
