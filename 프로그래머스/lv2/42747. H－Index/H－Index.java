import java.util.*;

class Solution {
    public int solution(int[] citations) {
        int answer = 1;
        Integer[] ctt = new Integer[citations.length];
        
        for(int i = 0; i < citations.length; i++) {
            ctt[i] = citations[i];
        }
        
        Arrays.sort(ctt, Comparator.reverseOrder());
        System.out.println(Arrays.toString(ctt));
        
        for(int i = 0; i < ctt.length; i++) {
            if(ctt[i] < answer) {
                return --answer;
            } else if(i == ctt.length - 1 || ctt[i] == answer) {
                return answer;
            }
            answer++;
        }
        return answer;
    }
}