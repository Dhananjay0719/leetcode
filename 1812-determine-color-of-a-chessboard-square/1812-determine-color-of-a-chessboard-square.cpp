class Solution {
public:
    bool squareIsWhite(string coordinates) {
     int c1,c2;
     c1=coordinates[0];
     c2=coordinates[1]-'0';
     if((c1%2==1 && c2%2==1) || (c1%2==0 && c2%2==0))
     {return false;}
     else
     {return true;}
    }
};