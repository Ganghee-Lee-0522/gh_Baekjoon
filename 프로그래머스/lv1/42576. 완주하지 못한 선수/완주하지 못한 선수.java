import java.util.HashMap;

class Solution {
    public String solution(String[] participant, String[] completion) {
        String answer = "";
        HashMap<String, Integer> athlets = new HashMap<>();
        for(String player : participant) {
            athlets.put(player, athlets.getOrDefault(player, 0) + 1);
        }
        for(String player : completion) {
            athlets.put(player, athlets.get(player) - 1);
        }
        for(String key : athlets.keySet()) {
            if(athlets.get(key) != 0) {
                answer = key;
                break;
            }
        }
        return answer;
    }
}