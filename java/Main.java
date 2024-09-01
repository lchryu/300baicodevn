import java.util.Scanner;

public class Main {

    static char[] hoandoi(char[] s, int l, int r) {
        char tmp = s[l];
        s[l] = s[r];
        s[r] = tmp;
        return s;
    }

    public static void main(String[] args) {
        // O(N/2)

        Scanner scanner = new Scanner(System.in);

        String s = scanner.nextLine();
        char[] charArray = s.toCharArray();  // Chuyển đổi chuỗi thành mảng ký tự

        int l = 0, r = charArray.length - 1;

        while (l < r) {
            charArray = hoandoi(charArray, l, r);
            l++;
            r--;
        }
        s = new String(charArray);  // Chuyển mảng ký tự trở lại thành chuỗi
        System.out.println(s);


    }
}
                                                         Tran Phi An Binh