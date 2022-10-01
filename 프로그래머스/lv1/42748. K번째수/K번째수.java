import java.util.Arrays;

class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int[] answer = new int[commands.length]; // 행 길이 만큼 배열로 할당
        for(int i = 0; i < commands.length; i++) {
            int[] temp = Arrays.copyOfRange(array, commands[i][0] - 1, commands[i][1]);
            sort(temp, 0, temp.length - 1);
            answer[i] = temp[commands[i][2] - 1];
        }
        return answer;
    }

    void sort(int[] arr,int start, int end) {
        int part=partition(arr,start,end);
        if(start<part-1) sort(arr,start,part-1);
        if(end>part) sort(arr,part,end);
    }

    int partition(int[] arr,int start,int end) {
        int pivot=arr[(start+end)/2];
        while(start<=end) {
            while(arr[start]<pivot) start++;
            while(arr[end]>pivot) end--;
            if(start<=end) {
                swap(arr,start,end);
                start++;
                end--;
            }
        }
        return start;
    }

    void swap(int[] arr,int start,int end) {
        int tmp=arr[start];
        arr[start]=arr[end];
        arr[end]=tmp;
        return;
    }
}
