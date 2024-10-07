package ps
/* 18:03 ~ 18:50 */
fun main(args: Array<String>) {
    val br = System.`in`.bufferedReader()
    val (n, m) = br.readLine().split(" ").map { it.toInt() }

    val list = MutableList(n) { "" }
    val map = sortedMapOf<Char,Int>()
    var ret = ""
    var count = 0

    for (i in 0 until n) {
        list[i] = br.readLine()
    }

    for(j in 0 until m) {
        for(i in 0 until n) {
            val c = list[i].get(j)
            map[c] = map.getOrDefault(c, 0).plus(1)
        }
        val b = map.maxBy { it.value }
        ret += b.key
        count += n - b.value
        map.replaceAll { t, u -> 0 }
    }

    println(ret)
    println(count)
}