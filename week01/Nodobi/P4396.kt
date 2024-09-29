package ps

fun Int.isOutOfBounds(max: Int): Boolean =
    this < 0 || this >= max


data class Block(
    var revealed: Boolean,
    var isMine: Boolean = false,
    var num: Int
)

class Field() {
    private lateinit var field: Array<Array<Block>>
    private var isFail = false

    constructor(n: Int) : this() {
        field = Array(n) { Array<Block>(n) { Block(false, false, 0) } }
    }

    fun updateField(info: Array<String>) {
        val n = info.size

        for (y in 0 until n) {
            for (x in 0 until n) {
                field[y][x].isMine = (info[y][x] != '.')
            }
        }

        updateNum()
    }

    private fun updateNum() {
        val dx = arrayOf(1, -1, 0, 0, 1, 1, -1, -1)
        val dy = arrayOf(0, 0, 1, -1, 1, -1, 1, -1)

        for (y in 0 until field.size) {
            for (x in 0 until field.size) {
                for (i in 0 until 8) {
                    val ny = y + dy[i]
                    val nx = x + dx[i]
                    if (nx.isOutOfBounds(field.size) || ny.isOutOfBounds(field.size)) continue
                    if (field[ny][nx].isMine)
                        field[y][x].num++
                }
            }
        }
    }

    fun revealField(info: Array<String>) {
        val n = info.size

        for (y in 0 until n) {
            for (x in 0 until n) {
                field[y][x].revealed = if (info[y][x] == 'x') {
                    if (field[y][x].isMine) isFail = true
                    true
                } else {
                    false
                }
            }
        }
    }

    fun print() {
        val n = field.size


        for (y in 0 until n) {
            for (x in 0 until n) {
                print(
                    if (isFail && field[y][x].isMine) "*"
                    else if (field[y][x].revealed) field[y][x].num
                    else "."
                )
            }
            print("\n")
        }
    }
}

fun main() {
    val br = System.`in`.bufferedReader()
    val n = br.readLine().toInt()
    val field = Field(n)

    val info = Array<String>(n) { "" }
    for (i in 0 until n) {
        info[i] = br.readLine()
    }
    field.updateField(info)

    for (i in 0 until n) {
        info[i] = br.readLine()
    }
    field.revealField(info)

    field.print()
}