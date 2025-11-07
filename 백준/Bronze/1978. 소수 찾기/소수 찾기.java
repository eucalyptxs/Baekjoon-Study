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

        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int res = 0;
        for (int i=0 ; i < r ; i++){
            int num = sc.nextInt();
            if (isPrime[num]) res += 1;
        }

        System.out.println(res);

    }
}