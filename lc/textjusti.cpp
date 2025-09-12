class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        vector<string> currentline;
        int currentlinetotalchar=0;
        for(int i=0; i<words.size(); i++){
             string &currentword = words[i];
             currentline.push_back(currentword);
        }
       
        return currentline;
        
    }
};
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<string> words = {"This", "is", "an", "example", "of", "text", "justification."};
    int maxWidth = 16;
   
     
    return 0; 
}
//binary search tc--