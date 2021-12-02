package kittycatcse
import "core:os"
import "core:fmt"
// wat a piece of crap there is no straight way to take inputs :c
main :: proc() {
    buffer: [256]u8
    bytes_read, error := os.read(os.stdin, buffer[:])
    assert(error == os.ERROR_NONE)
    
    text := cast(string) buffer[:bytes_read]
    fmt.println(text)
}