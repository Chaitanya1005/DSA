class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        for(int i=0; i<bills.size(); i++){
            // cout<<i<<" "<<five<<" "<<ten<<" "<<endl;
            if(bills[i]==5) {
                five++;
                continue;
            }
            if(bills[i]==10){
                ten++;
                if(five>0)five--;
                else return false;
                continue;
            }
            if(bills[i]==20){
                if(ten>0 && five>0){
                    ten--;
                    five--;
                }
                else if(five>=3) five=five-3;
                else return false;
            }
        }
        return true;
    }
};