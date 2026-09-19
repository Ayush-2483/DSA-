class Solution {
public:
    bool checkOverlap(int r, int cx, int cy, int x1, int y1, int x2, int y2) {
        int px =max(x1, min(cx, x2));
        int py =max(y1, min(cy, y2));

        int dx=cx - px;
        int dy=cy - py;

        if(dx*dx+dy*dy<=r*r)
        return true;
       

       return false;
    }
};