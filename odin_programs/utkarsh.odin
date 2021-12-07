package kittycse

import "core:fmt"
import "core:math/rand"
import "core:time"
main :: proc() {
    rand.set_global_seed(u64(time.time_to_unix(time.now())))
    s:=[3]string{"Phak u","Fuck nugget","Normies"}
    c:=rand.int_max(len(s))
    fmt.println(s[c])
}