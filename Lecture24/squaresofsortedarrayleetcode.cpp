class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
//         vector<int> v;
//         for(int i=0;i<nums.size();i++){// [-4,-1,0,3,10]
//             int sq=nums[i]*nums[i];//
//             v.push_back(sq);//
            
            
//         }
        
        
//         sort(v.begin(),v.end());
//         return v;
        
        
//         new sol
        
//      4 9 9  49 121
        vector<int> v;
        
        int i=0;
        int j=nums.size()-1;//4
        
        
//         loop
        while(i<=j){
             if(abs(nums[j])>abs(nums[i])){//10 >4 3>4
            int sq=nums[j]*nums[j];//10*10-->100 3*3-->9
            v.insert(v.begin(),sq);//100  9 16 100
            j--;
            
        }
        else{
            int sq=nums[i]*nums[i];//1*1 0*0
            v.insert(v.begin(),sq);//16 100    0 1 9 16 100
            i++;
            
            
            
        }
        
        }
        
        
        return v;
       
        
        
        
        
        
    }
};