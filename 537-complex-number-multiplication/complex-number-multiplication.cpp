void getParts(string s, int &real, int &imag) {
    int i = 0;
    int sign = 1;

    real = 0;
    imag = 0;

    
    if (s[i] == '-') {
        sign = -1;
        i++;
        
    }
    

    while (s[i] != '+') {
        real = (real * 10) + (s[i] - '0');
        i++;
    }
    real = real * sign;

    
    sign = 1;
    
i++;
        
    if (s[i] == '-')
    {sign = -1;
    i++;}
       

    while (s[i] != 'i') {
        imag = (imag * 10) + (s[i] - '0');
        i++;
    }
    imag = imag * sign;
}
class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {

        int a1, b1, a2, b2;

        getParts(num1, a1, b1);
        getParts(num2, a2, b2);

        int real = (a1 * a2) - (b1 * b2);
        int imag = (a1 * b2) + (a2 * b1);

        return to_string(real) + "+" + to_string(imag) + "i";
    }
};
