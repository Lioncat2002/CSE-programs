package kittycatcse
import "core:os"
import "core:fmt"
import "core:strconv"
// wat a piece of crap there is no straight way to take inputs :c
main :: proc() {

}


read::proc()->string{
    buffer: [256]u8
    bytes_read, error := os.read(os.stdin, buffer[:])
    assert(error == os.ERROR_NONE)
    
    text := cast(string) buffer[:bytes_read]
    return text

    buf:[1024]byte
    a,err:=os.read(os.stdin,buf[:])
    fmt.println(string(buf[:a]))
    
}