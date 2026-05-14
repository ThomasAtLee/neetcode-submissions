class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int t;
        int j;
        int size;
        for(int i = 0; i < numbers.size(); i++){
            t = target - numbers[i];
            size = numbers.size();
            j = size/2;
            while(size>0){
              if(numbers[j] == t && i !=j){
                if(i<j){
                    return{i+1,j+1};
                }
                return{j+1,i+1};
              }  

              if(numbers[j] > t){
                j -= (size)/4;
                if((size)/4 < 1){
                    j-=1;
                }
              }
              else if(numbers[j] < t){
                j += (size)/4;
                if((size)/4 < 1){
                    j+=1;
                }
              }
              size = size/2;
            }
             if(numbers[j] == t){
                if(i<j){
                    return{i+1,j+1};
                }
                return{j+1,i+1};
              } 

              
        }
        return {1,static_cast<int>(numbers.size())};
    }
};
