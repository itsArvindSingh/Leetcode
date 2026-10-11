class Solution {
public:
    long long wonderfulSubstrings(string word) {
        vector<int> totalMask(1024, 0);
        totalMask[0] = 1;
        int currentMask = 0;
        long long validcount = 0;
        for(char ch: word){
            currentMask ^= (1 << ch - 'a');

            validcount += totalMask[currentMask];// for even count

            for(int i = 0; i< 10; i++){ // for odd count
                int tempMask = currentMask ^ (1 << i);
                validcount += totalMask[tempMask];
            }

            totalMask[currentMask]++; // storing the currentmask
        }
        return validcount;
    }
};