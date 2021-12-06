/*
1
12
123
1234
12345

 */


package kittycse

import "core:fmt"
import "core:os"
import "core:strconv"
main :: proc() {
    buf:[1024]byte
    a,err:=os.read(os.stdin,buf[:])
    n,err1:=strconv.parse_int(string(buf[:a]))

    for i in 1..n{
        for j in 1..i{
            fmt.printf("%d",j)
        }
        fmt.println()
    }
}