package kittycse

import "core:fmt"

import "vendor:raylib"

main :: proc() {
    raylib.InitWindow(800,450,"Hello raylib odin!")

    for !raylib.WindowShouldClose(){
        raylib.BeginDrawing()

        raylib.ClearBackground(raylib.RAYWHITE)
        raylib.DrawText("Hello Raylib odin!",190,200,20,raylib.LIGHTGRAY)
        raylib.EndDrawing()
    }
    raylib.CloseWindow()
}