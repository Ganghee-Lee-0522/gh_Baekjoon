import java.util.*;

class Solution {
    public String solution(int[] numbers) {
        String answer = "";
        String[] strnums = new String[numbers.length];
        
        for(int i = 0; i < numbers.length; i++) {
            strnums[i] = Integer.toString(numbers[i]);
        }
        
        Arrays.sort(strnums, new Comparator<String>() {
            @Override
            public int compare(String k, String m) {
                return (m + k).compareTo(k + m);
            }
        });
        
        if(strnums[0].equals("0"))
            return "0";
        
        answer = String.join("", strnums);
        
        return answer;
    }
}