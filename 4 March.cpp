948. Bag of Tokens

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        sort(tokens.begin(),tokens.end());
        int i = 0;
        int j = n-1;
        int score = 0;
        int max_score = 0;

        while(i <= j){
            if(power >= tokens[i]){
                score++;
                max_score = max(max_score,score);
                power -= tokens[i];
                i++;
            }else if(score > 0){
                score--;
                power += tokens[j];
                j--;
            }else{
                break;
            }
        }

        return max_score;

    }
};
