import java.util.*;

public class CRT_DSA {
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
        String str= sc.nextLine();
        // Split the sentence into words, capitalize first letter of each word
        if (str == null || str.isEmpty()) {
            System.out.println(str);
            return;
        }

        String[] words = str.split(" ");
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < words.length; i++) {
            String w = words[i];
            if (w.length() > 0) {
                String cap = w.substring(0, 1).toUpperCase() + (w.length() > 1 ? w.substring(1) : "");
                sb.append(cap);
            }
            if (i < words.length - 1) sb.append(" ");
        }

        System.out.println(sb.toString());
    }
}
