import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int limit = 1_000_000;
        boolean[] isPrime = new boolean[limit + 1];

        // 일단 전부 소수(true)라고 가정
        for (int i = 2; i <= limit; i++) {
            isPrime[i] = true;
        }

        // 에라토스테네스의 체
        for (int i = 2; i * i <= limit; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= limit; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // 결과 출력 (1은 소수가 아니라서 2부터)
        StringBuilder sb = new StringBuilder();
        Scanner sc = new Scanner(System.in);
        int min = sc.nextInt();
        int max = sc.nextInt();
        for (int i = min; i <= max; i++) {
            if (isPrime[i]) {
                sb.append(i).append('\n');
            }
        }
        System.out.print(sb.toString());
    }
}