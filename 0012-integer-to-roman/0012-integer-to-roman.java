class Solution {
    public String intToRoman(int num) {
        String returnValue = "";

        while (num > 0) {
            while (num / 1000 > 0) {
                returnValue += "M";
                num -= 1000;
            }
            if (num >= 900) {
                returnValue += "CM";
                num -= 900;
            }
            while (num / 500 > 0) {
                returnValue += "D";
                num -= 500;
            }
            if (num >= 400) {
                returnValue += "CD";
                num -= 400;
            }
            while (num / 100 > 0) {
                returnValue += "C";
                num -= 100;
            }
            if (num >= 90) {
                returnValue += "XC";
                num -= 90;
            }
            while (num / 50 > 0) {
                returnValue += "L";
                num -= 50;
            }
            if (num >= 40) {
                returnValue += "XL";
                num -= 40;
            }
            while (num / 10 > 0) {
                returnValue += "X";
                num -= 10;
            }
            if (num == 9) {
                returnValue += "IX";
                num -= 9;
            }
            while (num / 5 > 0) {
                returnValue += "V";
                num -= 5;
            }
            if (num == 4) {
                returnValue += "IV";
                num -= 4;
            }
            while (num / 1 > 0) {
                returnValue += "I";
                num -= 1;
            }
        }
        return returnValue;
    }
}