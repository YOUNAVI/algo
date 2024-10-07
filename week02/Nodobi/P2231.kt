package ps

/* 18:55 ~ 19:20 */
fun main(args: Array<String>) {
    val br = System.`in`.bufferedReader()
    val N = br.readLine().toInt()

    var cnt = 0
    var n = N
    while (n > 0) {
        n /= 10
        cnt++
    }
    val b = (N - cnt * 9).let { if (it < 0) 0 else it }
    for (i in b..N) {
        var M = i
        var tmp = i
        while (tmp > 0) {
            M += (tmp % 10)
            tmp /= 10
        }

        if (M == N) {
            println(i)
            return
        }
    }

    println(0)
}

/*
* M = 231,
* 분해합 N = 231 + 2+3+1 = 237
*
* N이 주어졌을 때 가장 작은 M ?
*
* 237
* 각 자리 수 합 + 숫자
*
* 각 자리에서 나올 수 있는 최대 수 = 9
* 100 주어지면..
*
* 9*3 = 27
*
* 73 ~ 100 까지 조사
*
*
* 숫자 + 자리수합
* x*100 + y*10 + z*1 + (x+y+z) = N
* N = a*1 + b*10 + c*100 ...
* */