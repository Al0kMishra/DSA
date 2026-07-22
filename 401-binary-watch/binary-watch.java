class Solution {
    List<String> ans = new ArrayList<>();

    int[] hourLED = {8, 4, 2, 1};
    int[] minuteLED = {32, 16, 8, 4, 2, 1};

    public List<String> readBinaryWatch(int turnedOn) {
        solve(0, turnedOn, 0, 0);
        return ans;
    }
    public void solve(int index, int left, int hour, int minute) {
        if (hour>11 || minute>59) {
            return;
        }
        if (index == 10) {
            if (left == 0) {
                if(minute<10){
                    ans.add(hour+ ":0"+minute);
                }
                else{
                    ans.add(hour+":"+minute);
                }
            }
            return;
        }
        solve(index + 1, left, hour, minute);
        if (left > 0) {
            if (index < 4) {
                solve(index + 1, left - 1, hour + hourLED[index], minute);
            } 
            else {
                solve(index + 1, left - 1, hour, minute + minuteLED[index - 4]);
            }
        }
    }
}
    
