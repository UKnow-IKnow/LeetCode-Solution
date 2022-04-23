// LeetCode Q.12. Integer to Roman

//Only Logic Part

class Solution {
public:
    string intToRoman(int num) {
        int numm[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ans[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string s;
        for(int i=0;i<13;i++){
            while(num>=numm[i]){
                s=s+ans[i];
                num=num-numm[i];
            }
        }
        return s;
    }
};