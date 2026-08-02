class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        return true;
    }
};
// Why return true?
// n even hai.
// Alice pehle se jaan leti hai:
// Even-index sum
// Odd-index sum
// Jiska sum zyada hai, us parity ko choose kar leti hai.
// Woh strategy se usi parity ki saari piles le sakti hai.
// Total stones odd hain, isliye tie possible nahi.
// Isliye Alice hamesha jeetegi.