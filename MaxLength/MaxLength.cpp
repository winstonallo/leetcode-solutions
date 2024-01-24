class Solution{
public:
    int maxLength(vector<string> &arr){
        int n = arr.size();
        int maxCombination = (1 << n);//(pow(2, n))
        int ans = 0;
        for (int i = 0; i < maxCombination; i++){
            int charMask = 0; //mask for chars in current combination
            int len = 0; // current result length
            bool isValid = true;
            for (int j = 0; j < n; j++){
                if ((i & (1 << j)) == 0)
                    continue ; // skip if string no. j is not in current combination
                for (char c : arr[j]){
                    int charIndex = c - 'a';
                    if ((charMask & (1 << charIndex)) != 0){ //check if char is set in mask
                        isValid = false;
                        break ;
                    }
                    charMask |= (1 << charIndex); //add char to mask
                    len++;
                }
                if (isValid == false)
                    break ;
            }
            if (isValid == true)
                ans = max(ans, len);
        }
        return ans;
    }
};
