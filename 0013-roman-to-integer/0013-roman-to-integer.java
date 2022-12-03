class Solution {
    public int romanToInt(String s) {
        String[] numerals = s.split("");
        int[] numberValues = new int[s.length()];
        int finalNumber = 0;
        
        for (int i = 0; i < numerals.length; i++) {
            switch (numerals[i]) {
                case "I" -> numberValues[i] = 1;
                case "V" -> numberValues[i] = 5;
                case "X" -> numberValues[i] = 10;
                case "L" -> numberValues[i] = 50;
                case "C" -> numberValues[i] = 100;
                case "D" -> numberValues[i] = 500;
                case "M" -> numberValues[i] = 1000;
            }
        }

        for (int i = 0; i < numberValues.length; i++) {
            if (i != numberValues.length - 1 && numberValues[i] < numberValues[i + 1]) {
                finalNumber += numberValues[i + 1] - numberValues[i];
                i++;
            }
            else {
                finalNumber += numberValues[i];
            }
        }
        return finalNumber;
    }
}
