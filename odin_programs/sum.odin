package kittycatcse
import "core:os"
import "core:fmt"
import "core:strconv"

main :: proc() {
    
    a,err1:=strconv.parse_int(read())
    b,err2:=strconv.parse_int(read())
    c:int=a+b
    fmt.println(c)
    
}

read::proc()->string{
    buffer: [256]u8
    bytes_read, error := os.read(os.stdin, buffer[:])
    assert(error == os.ERROR_NONE)
    
    text := cast(string) buffer[:bytes_read]
    return text
    
}