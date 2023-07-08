class Solution {
    public int lengthOfLongestSubstring(String s) {
        int largestLength = 0;
        String input = s;
        ArrayList<Character> list = new ArrayList<Character>();
        for (int i = 0; i < input.length(); i++) {
            if (!list.contains(input.charAt(i))) {
                list.add(input.charAt(i));
            }
            else {
                list.clear();
                input = input.substring(input.indexOf(input.charAt(i)) + 1);
                i = -1;
            }
            if (largestLength < list.size()) {
                largestLength = list.size();
            }
        }
        return largestLength;
    }
}