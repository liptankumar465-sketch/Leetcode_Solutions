class Solution {
    
bool numbersHasEvenDigit(int num){
    int countDigits = 0;
    while(num != 0){
        countDigits++;
        num /= 10;
    }
    return countDigits % 2 == 0;
}

public:
    int findNumbers(vector<int>& nums) {
        int evenDigits = 0;
       for(int num : nums){
            if (numbersHasEvenDigit(num)){
                evenDigits++;
            }
       } 

       return evenDigits;
    }
};