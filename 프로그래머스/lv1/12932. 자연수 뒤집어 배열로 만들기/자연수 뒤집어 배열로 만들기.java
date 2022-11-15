class Solution {
    public int[] solution(long n) {
        long idx = n;
        int num = 0;
        for(int i = 0; idx != 0; i++) {
            num++;
            idx /= 10;
        }
        
        int[] answer = new int[num];
        for(int i = 0; n != 0; i++) {
            answer[i] = (int)(n % 10);
            n /= 10;
        }
        
        return answer;
    }
}