package ps

/* 19:25 ~ 19:47*/
fun main(args: Array<String>) {
    val br = System.`in`.bufferedReader()
    var N = br.readLine().toInt()

    val arr = Array(N + 1) { false }
    arr[0] = false
    arr[1] = true
    for (i in 2..N) {
        arr[i] = !arr[i - 1]
    }

    if (arr[N]) {
        println("SK")
    } else {
        println("CY")
    }
}