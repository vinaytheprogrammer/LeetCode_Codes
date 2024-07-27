class Solution {
public:
    string losingPlayer(int x, int y) {
         int moves = min(x, y / 4);

   
    if (moves % 2 == 0) {
        return "Bob";
    } else {
        return "Alice";
    }
    }
};