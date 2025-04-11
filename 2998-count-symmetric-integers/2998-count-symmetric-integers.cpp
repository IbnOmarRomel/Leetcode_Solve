class Solution {
public:
    int countSymmetricIntegers(int low, int high) {

        int count = 0;

        for (int i = low; i <= high; i++) {
            string s1 = to_string(i);
            int n = s1.size();

            if (n % 2 == 0) {

                int value1 = 0, value2 = 0, move = 0;
                int num = i;
                while (num > 0) {
                    if (move < n / 2) {
                        value1 += (num % 10);
                    } else {
                        value2 += (num % 10);
                    }
                    move++;
                    num /= 10;
                }
                if (value1 == value2 and value1 != 0)
                    count++;
            }
        }
        return count;
    }
};