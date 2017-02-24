class Solution {
public:
    string intToRoman(int num) {
	if (num < 1 || num > 3999) return "";
        string roman="";
        string romanLib[4][10] = {{"","I","II","III","IV","V","VI","VII","VIII","IX"},
                                  {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
                                  {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
                                  {"","M","MM","MMM"}};
        roman.append(romanLib[3][num/1000%10]);
        roman.append(romanLib[2][num/100%10]);
        roman.append(romanLib[1][num/10%10]);
        roman.append(romanLib[0][num%10]);
        return roman;
    }
};
