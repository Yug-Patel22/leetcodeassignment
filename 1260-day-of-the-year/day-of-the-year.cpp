class Solution {
public:
    int dayOfYear(string s) {
        vector<int>v={31,28,31,30,31,30,31,31,30,31,30,31};
        int year=stoi(s.substr(0,4));
        int date=stoi(s.substr(8,2));
        int mon=stoi(s.substr(5,2));
        int a=accumulate(v.begin(),v.begin()+mon-1,0);
        a+=date;
        if(mon>2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))a++;
        return a;
    }
};