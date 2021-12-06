/*
     1 
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
 */

package kittycse

import "core:fmt"
import "core:strconv"
import "core:os"

main :: proc() {
    //Reading inputs
    buf:[1024]byte
    a,err:=os.read(os.stdin,buf[:]) //reading as a u8
    n,err1:=strconv.parse_int(string(buf[:a]))//convert to string then to int
    c:=0
    for i:=n;i>=1;i-=1{
        for j:=i;j>=1;j-=1{
            fmt.printf(" ")

        }
        c+=1
        for k in 1..c{
            fmt.printf("%d ",k )
        }
        fmt.println()
    }
}